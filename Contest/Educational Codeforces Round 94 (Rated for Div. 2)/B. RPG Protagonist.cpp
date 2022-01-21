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
#define pb push_back
#define mp make_pair
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
        ll a,b;cin>>a>>b;
        ll c,d;cin>>c>>d;
        ll x,y;cin>>x>>y;
       if(x>y)
       {
           swap(x,y);swap(c,d);
       }
       ll ans=0;
       for(ll i=0;i<=c and i*x<=a;i++)
       {
           ll cnt=0;
           cnt+=i;
           ll e=a-(i*x);
           ll f=min(d,e/y);
           cnt+=f;
           ll g=c-i;
           ll h=d-f;
           ll j=min(g,b/x);
           cnt+=j;
           ll k=min(h,(b-(x*j))/y);
           cnt+=k;
           //cout<<cnt<<endl;
           ans=max(ans,cnt);
           //cout<<ans<<endl;
       }
       cout<<ans<<endl;
    }
}
