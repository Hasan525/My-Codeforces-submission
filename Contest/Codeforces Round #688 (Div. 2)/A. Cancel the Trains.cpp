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
int main()
{
    tc
    {
        ll n,m;cin>>n>>m;
        mpi ma,mb;
        ll a[n],b[m];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            ma[a[i]]++;
        }
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
            mb[b[i]]++;
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ans+=min(ma[a[i]],mb[a[i]]);
        }
        cout<<ans<<endl;
    }
}
