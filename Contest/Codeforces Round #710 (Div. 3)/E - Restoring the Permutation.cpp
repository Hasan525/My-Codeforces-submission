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
#define mx -10000000000000;
#define EMPTY_VALUE -1
int main()
{
    tc
    {
        vector<ll>v,m;
        mpi mp;
        ll n;
        cin>>n;
        ll ara[n];
        set<ll>s;
        for(ll i=0; i<n; i++)
        {
            cin>>ara[i];
            s.insert(i+1);
        }
        for(ll i=0; i<n; i++)
        {
            if(i==0)
            {
                v.pb(ara[i]);
                s.erase(ara[i]);
            }
            else
            {
                if(ara[i]==ara[i-1])
                {
                    ll x=*s.begin();
                    v.pb(x);
                    s.erase(x);
                }
                else
                {
                    v.pb(ara[i]);
                    s.erase(ara[i]);
                }
            }
        }
        for(ll i=0; i<v.sz; i++)
            cout<<v[i]<<" ";
        cout<<endl;
        s.clear();
        ll k=1;
        for(ll i=0; i<n; i++)
        {
            if(i==0)
            {
                m.pb(ara[i]);
                for(ll j=k; j<ara[i]; j++)
                {
                    s.insert(j);
                }
                k=ara[i]+1;
            }
            else if(ara[i]!=ara[i-1])
            {
                m.pb(ara[i]);
                for(ll j=k; j<ara[i]; j++)
                {
                    s.insert(j);
                }
                k=ara[i]+1;
            }
            else
            {
                ll x=*s.rbegin();
                m.pb(x);
                s.erase(x);
            }
        }
        for(ll i=0; i<n; i++)
            cout<<m[i]<<" ";
        cout<<endl;
    }
}
