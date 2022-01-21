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
        ll n,m,k;cin>>n>>m>>k;
    ll ara[n];
    for(ll i=0;i<n;i++)
        cin>>ara[i];
    ll ans=0;
    for(ll i=0;i<=k;i++)
    {
        ll d=m-i*2;
        if(d<0)
            continue;
        ll sum=0,mx=0;
        for(ll j=0;j<=d;j++)
            sum+=ara[j];
        for(ll j=0;j<=d;j++)
            mx=max(ara[j]+ara[j+1],mx);
        sum+=(mx*i);
       // cout<<sum<<endl;
        ans=max(sum,ans);
    }
    cout<<ans<<endl;
    }
}
