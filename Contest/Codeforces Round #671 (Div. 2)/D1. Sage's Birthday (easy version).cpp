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
#define                   mp make_pair
#define                   NO cout<<"NO\n";
#define                   pb push_back
#define                   fi first
#define                   se second
#define                   st string
#define                   sz size()
#define                   case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define                   tc ll t;cin>>t;while(t--)
priority_queue<ll,vector<ll>,greater<ll> > q;
int32_t main()
{
    ll n;cin>>n;
    ll ara[n];
    for(ll i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(ll i=0;i<n-1;i+=2)
    {
        swap(ara[i],ara[i+1]);
    }
    ll ans=0;
    for(ll i=1;i<n-1;i++)
    {
        if(ara[i]<ara[i-1] and ara[i]<ara[i+1])
            ans++;
    }
    cout<<ans<<endl;
    for(ll i=0;i<n;i++)
        cout<<ara[i]<<" ";
    cout<<endl;
}
