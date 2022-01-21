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
    ll n;cin>>n;
    ll ara[n];
    for(ll i=0;i<n;i++)
        cin>>ara[i];
    mpi mp;
    mp[ara[0]]=1;
    ll s=0;
    mp[s]=1;
    s=ara[0];
    ll ans=0;
    for(ll i=1;i<n;i++)
    {
        if(mp[s+ara[i]])
        {
            mp.clear();
            s=ara[i];
            mp[ara[i]]=1;
            mp[0]=1;
            ans++;
        }
        else
        {
            s+=ara[i];
            mp[s]=1;
        }
    }
    cout<<ans<<endl;

}
