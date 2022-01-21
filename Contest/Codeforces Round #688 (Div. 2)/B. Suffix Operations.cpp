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

        ll n;cin>>n;
        ll ara[n];
        for(ll i=0;i<n;i++)
            cin>>ara[i];
            ll sum=0;
        for(ll i=0;i<n-1;i++)
        {
            sum+=abs(ara[i]-ara[i+1]);
        }
        ll ans=sum;
        for(ll i=0;i<n;i++)
        {
            if(i!=0 && i+1!=n)
            {
                ll a=abs(ara[i]-ara[i-1]);
                ll b=abs(ara[i]-ara[i+1]);
                ll c=abs(ara[i-1]-ara[i+1]);
                sum=min(sum,ans-a-b+c);

            }
            else if(i+1==n)
            {
                sum=min(sum,ans-abs(ara[i]-ara[i-1]));
            }
            else
                sum=min(sum,ans-abs(ara[i]-ara[i+1]));
        }
     cout<<sum<<endl;

    }
}
