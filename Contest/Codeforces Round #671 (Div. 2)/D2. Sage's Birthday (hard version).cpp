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
    ll ara[n],b[n];
    ll j=0;
    for(ll i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    ll ans=0;
    sort(ara,ara+n);
    for(ll i=0;i<n;i++)
        if(i%2)b[i]=ara[j++];
    for(ll i=0;i<n;i++)
        if(!(i%2))
        b[i]=ara[j++];
    for(ll i=1;i<n-1;i++)
       if(b[i]<b[i-1] and b[i]<b[i+1])
       ans++;
       cout<<ans<<endl;
       for(ll i=0;i<n;i++)
        cout<<b[i]<<" ";
       cout<<endl;
}
