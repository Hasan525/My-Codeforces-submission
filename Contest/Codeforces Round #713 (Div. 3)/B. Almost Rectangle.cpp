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
        ll n;
        cin>>n;
        char s[n+1][n+1];
        ll c=0,a,b,x,y;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cin>>s[i][j];
            }
        }
       for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
               if(s[i][j]=='*' and c==0)
               {
                   a=i;b=j;c=1;
               }
               else if(s[i][j]=='*')
               {
                   x=i;y=j;
               }
            }
        }
        if(a==x)
        {
            if(a+1<n)
            {
                s[a+1][b]='*';
                s[x+1][y]='*';
            }
            else
            {
                s[a-1][b]='*';
                s[x-1][y]='*';
            }
        }
        else if(b==y)
        {
            if(b+1<n)
            {
                s[a][b+1]='*';
                s[x][y+1]='*';
            }
            else
            {
                s[a][b-1]='*';
                s[x][y-1]='*';
            }
        }
        else
        {
            s[a][y]='*';
            s[x][b]='*';
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }
}
