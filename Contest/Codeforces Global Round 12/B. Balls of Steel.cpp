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

 bool compare(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.first==b.first)
    return (a.second < b.second);
}
int main()
{
    tc
    {
        ll n,k;cin>>n>>k;
        ll x,y;
        vpi v;
        for(ll i=0;i<n;i++)
        {
           cin>>x>>y;
           v.pb(mp(x,y));
        }
        bool flag=true;
        for(ll i=0;i<n;i++)
        {
            flag=true;
            for(ll j=0;j<n;j++)
            {
                if((abs(v[i].fi-v[j].fi)+abs(v[i].se-v[j].se))>k)
                {
                   flag=false;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
}
