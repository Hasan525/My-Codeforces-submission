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
int main()
{
    tc
    {

    ll n;cin>>n;
    ll ara[n];
    for(ll i=0;i<n;i++)
        cin>>ara[i];
    ll s=0,d=0;
    for(ll i=0;i<n;i++)
    {
       if(d<0)
           {
                s+=d;
                d=0;
           }
      if(d==0 and ara[i]<0)
        {
            s+=ara[i];
        }
       else
       {
          d+=ara[i];
       }
    }
    //cout<<d<<s<<endl;
    cout<<abs(s)<<endl;
    }
}
