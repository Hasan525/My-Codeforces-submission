#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
#define  si set<ll>
#define pqi  priority_queue<pair<ll, ll> >
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define reP(i,a,n) for(ll i=a;i<=n;i++)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define st string
#define sz size()
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)
int main()
{
    tc
    {
        ll n;cin>>n;
    st s;cin>>s;
    ll cont =0;
    for(ll i=n-1;i>=0;i--)
    {
        if(s[i]==')')
            cont++;
        else
            break;
    }
    ll ans=n-cont;
    if(ans<cont)
    cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }

}
