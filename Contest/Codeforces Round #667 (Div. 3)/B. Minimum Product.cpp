#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
#define  si set<ll>
#define pq prority_queue<ll>
#define pqi  priority_queue<pair<ll, ll> >
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
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        ll g=a,h=b,i=x,j=y,k=n;

        if(x>y)
        {
            swap(a,b);
            swap(x,y);
        }
        ll d=a-x;
        a-=min(n,d);
        n-=min(n,d);
        ll e=b-y;
        b-=min(n,e);
        if(g>h)
        {
            swap(g,h);
            swap(i,j);
        }
        ll f=g-i;
        g-=min(k,f);
        k-=min(k,f);
        ll m=h-j;
        h-=min(k,m);
        ll ans=min((g*h),(a*b));
        cout<<ans<<endl;
    }
}
