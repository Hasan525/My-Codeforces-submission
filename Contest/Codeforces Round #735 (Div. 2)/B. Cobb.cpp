#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
#define mpm map<vector<ll>,ll>
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
#define mx -10000000000000;
#define EMPTY_VALUE -1
int main()
{
   tc
   {
     ll n,k;cin>>n>>k;
     ll ara[n+2];
     for(ll i=1;i<=n;i++)
        cin>>ara[i];
     ll ans=-1000000000;
     for(ll i=n;i>=1;i--)
     {
         for(ll j=i-1;j>=1;j--)
         {
             if(i*j<=ans)
                break;
             ans=max(ans,((i*j)-(k*(ara[i]|ara[j]))));
         }
     }
     cout<<ans<<endl;
   }
}
