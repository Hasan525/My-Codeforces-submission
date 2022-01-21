#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
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
#define mx -10000000000000000;
#define EMPTY_VALUE -1
ll ara[100000];
ll p[100000];
st s,t;
ll n,m,W,ans=0,x,y;
ll dp[100+2][100+2];
ll C[10000];
ll mem[1000][1000];
int main()
{
    st ans="",mid="";
    vector<string>v;
    map<string,ll>mp;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        cin>>s;
        mp[s]++;
        v.pb(s);
    }
    for(ll i=0;i<n;i++)
    {
        t=v[i];
        reverse(t.begin(),t.end());
        if(mp[t] and t!=v[i])
        {
            ans+=v[i];
            mp[v[i]]--;

        }
    }
    for(ll i=0;i<n;i++)
    {
        t=v[i];
        reverse(t.begin(),t.end());
        if(t==v[i])
        {
            mid=t;
            break;
        }
    }
    cout<<ans.sz*2+mid.sz<<endl;
    cout<<ans;
    cout<<mid;
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

}
