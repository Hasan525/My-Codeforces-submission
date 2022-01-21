#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
#define  si set<ll>
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
        ll n;
    cin>>n;
       ll ara[n];
    for(ll i=0; i<n; i++)
        cin>>ara[i];
    vector<ll>v;
    ll mx=0,mi=-100000000000;
    bool a=false,b=false;
    for(ll i=0; i<n; i++)
    {
        if(ara[i]<0)
        {
            if(a)
            {
                v.pb(mx);
                mx=0;
                a=false;
            }
            mi=max(mi,ara[i]);
            b=true;
        }
        else
        {
            if(b)
            {
                v.pb(mi);
                mi=-100000000000;
                b=false;
            }
            mx=max(mx,ara[i]);
            a=true;
        }
    }
    if(a)
        v.pb(mx);
    if(b)
        v.pb(mi);
    //for(ll i=0;i<v.sz;i++)
       //cout<<v[i]<<" ";
     ll sum=0;
    for(ll i=0;i<v.sz;i++)
     sum+=v[i];
    cout<<sum<<endl;
   }

}
