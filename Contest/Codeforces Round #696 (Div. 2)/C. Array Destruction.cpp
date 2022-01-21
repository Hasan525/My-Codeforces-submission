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



int main()
{
    tc
    {
        ll n;
        cin>>n;
        ll ara[2*n+2];
        for(ll i=0; i<2*n; i++)
            cin>>ara[i];
        sort(ara,ara+n+n);
        mpi check;
        ll mx=ara[n+n-1],res;
        bool flag=false;
        for(ll i=n+n-2; i>=0; i--)
        {
            ll x=mx+ara[i];
            res=x;
            for(ll j=0; j<n+n; j++)
                check[ara[j]]++;
            ll cnt=0;
            for(ll j=n+n-1; j>=0; j--)
            {
                if(check[ara[j]] and check[x-ara[j]])
                {
                    if(x-ara[j]!=ara[j])
                    {
                        check[ara[j]]--;
                        check[x-ara[j]]--;
                        x=max((x-ara[j]),ara[j]);
                        cnt++;
                    }
                    else if(check[ara[j]]>=2)
                    {
                        check[ara[j]]--;
                        check[x-ara[j]]--;
                        x=max((x-ara[j]),ara[j]);
                        cnt++;
                    }

                }
            }
            if(cnt==n)
            {
                flag=true;
                break;
            }
            check.clear();


        }
        if(flag)
        {
            cout<<"YES"<<endl;
            cout<<res<<endl;
            for(ll j=0; j<n+n; j++)
                check[ara[j]]++;
            for(ll i=n+n-1; i>=0; i--)
            {
                if(check[ara[i]] and check[res-ara[i]])
                {
                    check[ara[i]]--;
                    check[res-ara[i]]--;
                    cout<<ara[i]<<" "<<res-ara[i]<<endl;
                    res=max((res-ara[i]),ara[i]);
                }
            }
        }
        else
            cout<<"NO"<<endl;
    }
}
