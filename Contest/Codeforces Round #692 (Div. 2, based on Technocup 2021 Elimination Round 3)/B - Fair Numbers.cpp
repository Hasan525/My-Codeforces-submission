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
    ll ans=n;
    while(ans<=1e18)
    {
        ll x=ans;
        ll flag=1;
        while(x>0)
        {
        if(x%10==0)
        {
            x=x/10;
            continue;
        }
        if(ans%(x%10)!=0)
        {
            flag=0;
            break;
        }
        x/=10;
        }
        if(flag)
        {
            cout<<ans<<endl;
            break;
        }
        ans++;
    }
    }
}
