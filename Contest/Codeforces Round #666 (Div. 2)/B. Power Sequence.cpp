#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
#define  si set<ll>
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
    ll mi=1e20;
    ll n;cin>>n;
    ll ara[n];
    for(ll i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    bool flag=true;
    ll ans;
    for(ll i=1;flag;i++)
    {
        ans=0;
        for(ll j=0;j<n;j++)
        {
           ll x=pow(i,j);
           if(x>1e12)
              goto sol;
           ans+=abs(x-ara[j]);
        }
        if(ans<0)
            break;
        mi=min(ans,mi);
    }
    sol: cout<<mi<<endl;
}
