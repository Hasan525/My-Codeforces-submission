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
#define mx -10000000000000;
#define EMPTY_VALUE -1
int main()
{
    ll n,m;
    cin>>n>>m;
    set<ll>s[n+2];
    ll u,v;
    for(ll i=0; i<m; i++)
    {
        cin>>u>>v;
        if(u>v)
            swap(u,v);
        s[u].insert(v);
    }
    ll cnt=0;
    for(ll i=1; i<=n; i++)
    {
        if(s[i].sz==0)
            cnt++;
    }
    ll q;
    cin>>q;
    ll x;
    for(ll i=0; i<q; i++)
    {
        cin>>x;
        if(x==3)
            cout<<cnt<<endl;
        else if(x==1)
        {
            cin>>u>>v;
            if(u>v)
                swap(u,v);
            s[u].insert(v);
            if(s[u].sz==1)
                cnt--;

        }
        else
        {
            cin>>u>>v;
            if(u>v)
                swap(u,v);
            s[u].erase(v);
            if(s[u].sz==0)
                cnt++;

        }
    }
}
