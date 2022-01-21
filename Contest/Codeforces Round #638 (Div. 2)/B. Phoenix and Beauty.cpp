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
int main()
{
    tc
    {
        ll n,k;
        cin>>n>>k;
        ll a;
       vpi vp;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            vp.pb(mp(a,i));
        }
        sort(vp.begin(),vp.end());
        vpi s;
        s.pb(mp(vp[0].se,vp[0].fi));
        for(ll i=1;i<vp.sz;i++)
        {
            if(vp[i].fi!=vp[i-1].fi)
                s.pb(mp(vp[i].se,vp[i].fi));
        }
        sort(s.begin(),s.end());
        if(s.sz<=k)
        {
            vi v;
            ll d=k;
            while(d>0)
            {
              for(ll i=0;i<s.sz;i++)
              {
                  v.pb(s[i].se);
                  d--;
                  if(d==0)
                    break;
              }
            }
            cout<<v.sz*n<<endl;
            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<v.sz; j++)
                    cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
