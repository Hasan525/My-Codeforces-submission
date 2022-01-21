#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
#define mpm map<vector<ll>,ll>
#define  si set<ll>
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
        ll n;
        cin>>n;
        ll x;
        bool flag=false;
        vector<ll>v;
        ll ans=0,cnt=0,res=0,mi=INT_MAX;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            if(x<0)
            {
                ans++;
                v.pb(abs(x));
            }
            else if(x==0)
            {
                cnt++;
                v.pb(x);
            }
            else
            {
                res++;
                mi=min(mi,x);
            }
        }
        sort(v.begin(),v.end());
        if(v.sz>=2)
        {
            for(ll i=0; i<v.sz-1; i++)
            {
                if(abs(v[i]-v[i+1])<mi)
                    flag=true;
            }
        }
        if(cnt>=2 || flag)
            cout<<ans+cnt<<endl;
        else if(res)
            cout<<ans+1+cnt<<endl;
        else
            cout<<ans+cnt<<endl;
    }
}
