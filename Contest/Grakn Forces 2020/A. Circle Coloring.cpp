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
        ll n;cin>>n;
    ll a[n],b[n],c[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i =0;i<n;i++)
        cin>>b[i];
    for(ll i=0;i<n;i++)
        cin>>c[i];
    ll x=a[0];
    cout<<x<<" ";
    for(ll i=1;i<n-1;i++)
    {
        if(x!=a[i])
        {
            x=a[i];
            cout<<x<<" ";
        }
        else if(x!=b[i])
        {
            x=b[i];
            cout<<x<<" ";
        }
       else  if(x!=c[i])
        {
            x=c[i];
            cout<<x<<" ";
        }
    }
    if(x!=a[n-1] and a[0]!=a[n-1])
        cout<<a[n-1]<<" ";
    else if(x!=b[n-1] and a[0]!=b[n-1])
        cout<<b[n-1]<<" ";
    else if(x!=c[n-1] and a[0]!=c[n-1])
        cout<<c[n-1]<<" ";
        cout<<endl;
    }
}
