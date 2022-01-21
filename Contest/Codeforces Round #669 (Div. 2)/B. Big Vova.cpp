#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define                   vi vector<ll>
#define                   vpi vector<pair<ll,ll> >
#define                   mpi map<ll,ll>
#define                   si set<ll>
#define                   pq prority_queue<ll>
#define                   pqi  priority_queue<pair<ll, ll> >
#define                   rep(i,a,n) for(ll i=a;i<n;i++)
#define                   reP(i,a,n) for(ll i=a;i<=n;i++)
#define                   YES cout<<"YES\n";
#define                   NO cout<<"NO\n";
#define                   mp make_pair
#define                   pb push_back
#define                   fi first
#define                   se second
#define                   st string
#define                   sz size()
#define                   case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define                   tc ll t;cin>>t;while(t--)
priority_queue<ll,vector<ll>,greater<ll> > q;
int main()
{
   tc
   {
        ll n;
    cin>>n;
    ll x,e;
    vi v,a;
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        a.pb(x);
    }
     for(ll i=0;i<n;i++)
     {
         ll mx=0;
         for(ll j=0;j<n;j++)
         {
             if(a[j]==0)
                continue;
             ll d=__gcd(a[j],ans);
             if(d>=mx)
             {
                 mx=d;
                 e=j;
             }
         }
         cout<<a[e]<<" ";
        ans=mx;
        a[e]=0;
     }
     cout<<endl;
   }
}
