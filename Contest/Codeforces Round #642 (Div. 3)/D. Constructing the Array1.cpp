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

bool compare(const pair<ll,ll>&a, const pair<ll,ll>&b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    else
        return a.first>b.first;
}

int main()
{
    tc
    {
        vpi v;
        ll n;
        cin>>n;
        v.pb(mp(n,0));
        ll ara[n];
        for(ll i=1; i<=n; i++)
        {
            sort(v.begin(),v.end(),compare);
            ll l=v[0].second;
            ll r=l+v[0].first;
            //cout<<l<<" "<<r<<endl;
            v.erase(v.begin());
            ll mid=(l+r-1)/2;
            ara[mid]=i;
            //cout<<mid<<endl;
            v.pb(mp((r-(mid+1)),(mid+1)));
            v.pb(mp((mid-l),l));
            //=cout<<"a"<<endl;
        }
        //cout<<"a"<<endl;
        for(ll i=0; i<n; i++)
            cout<<ara[i]<<" ";
        cout<<endl;
    }
}
