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
        ll n,x;cin>>n>>x;
    if(n<=2)
    {
        cout<<1<<endl;
        continue;
    }
    if(n<=x+2)
    {
        cout<<2<<endl;
        continue;
    }
    ll ans;
    for(ll i=3; ;i++)
    {
        ll d=x+i;
        ll e=(((i-1)*x)+2);
        if(d<=n and e>=n)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
   }
}
