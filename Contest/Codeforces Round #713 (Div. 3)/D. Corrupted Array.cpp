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
//#define mx -10000000000000;
#define EMPTY_VALUE -1
vector<ll>v;
ll fact(ll x)
{
    ll ans=1;
    for(ll i=2; i<=x; i++)
        ans*=i;
    return ans;
}
ll combinatorics(ll n,ll r)
{
    ll ans=1;
    for(ll k=1; k<=r; k++)
        ans=ans*(n+1-k)/k;
    return ans;
}
void sieve(ll x)
{
    bool prime[x+2];
    memset(prime,true,sizeof(prime));
    for(ll i=2; i*i<=x; i++)
    {
        if(prime[i])
        {
            for(ll j=i*2; j<=x; j+=i)
                prime[j]=false;
        }
    }
    for(ll i=2; i<=x; i++)
    {
        if(prime[i])
            v.pb(i);
    }
}
bool compare(const pair<ll,ll>&a, const pair<ll,ll>&b)
{
    return a.first>b.first;
}
void divisors(ll x)
{
    for(ll i=1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            v.pb(i);
            if(i*i!=x)
                v.pb(x/i);
        }
    }
}
/* ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();*/


int main()
{
    tc
    {
        ll sum=0;
        mpi mp;
        ll n;
        cin>>n;
        ll ara[n+3];
        for(ll i=0; i<n+2; i++)
        {
            cin>>ara[i];
            sum+=ara[i];
            mp[ara[i]]++;
        }
        bool flag=true;
        sort(ara,ara+n+2);
        ll cnt=sum-ara[n+1];
        for(ll i=0; i<n+1; i++)
        {
            if(cnt-ara[i]==ara[n+1])
            {
                mp[ara[n+1]]--;
                mp[ara[i]]--;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cnt=sum-ara[n];
            for(ll i=0; i<n+2; i++)
            {
                if(cnt-ara[i]==ara[n] and i!=n)
                {
                    mp[ara[n]]--;
                    mp[ara[i]]--;
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
            cout<<-1<<endl;
        else
        {
            for(ll i=0; i<n+2; i++)
                if(mp[ara[i]])
                {
                    cout<<ara[i]<<" ";
                    mp[ara[i]]--;
                }
            cout<<endl;
        }

    }
}
