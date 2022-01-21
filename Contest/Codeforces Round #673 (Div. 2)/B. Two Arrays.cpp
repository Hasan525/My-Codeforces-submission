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

bool compare(const pair<int,int> &a,
             const pair<int,int> &b)
{
    return (a.second < b.second);
}


int main()
{
    tc
    {
        ll n,k;
        cin>>n>>k;
        ll ara[n];
        vi v;
        mpi check,mp;
        for(ll i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        for(ll i=0; i<n; i++)
        {
            if(check[k-ara[i]]==0)
            {
               check[ara[i]]=1;
               v.pb(1);
            }
            else
            {
                check[ara[i]]=0;
               v.pb(0);
            }
        }
        for(ll i=0;i<n;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
}
