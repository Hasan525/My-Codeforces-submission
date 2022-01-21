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
vector<ll>v;
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

int main()
{
    sieve(100005);

    tc
    {
        ll a,b,k;
        cin>>a>>b>>k;
        if(k>=60)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(k==1)
        {
            if((a%b==0 || b%a==0) &&a!=b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            continue;
        }
        ll cnt=0;
        for(ll i=0; i<v.sz; i++)
        {
            while(a%v[i]==0)
            {
                cnt++;
                a/=v[i];
                if(cnt>=k)
                    break;
            }
            if(cnt>=k)
                break;
        }
        for(ll i=0; i<v.sz ; i++)
        {
            while(b%v[i]==0)
            {
                cnt++;
                b/=v[i];
                if(cnt>=k)
                    break;
            }
            if(cnt>=k)
                break;

        }
        if(a>1)
            cnt++;
        if(b>1)
            cnt++;
        if(cnt>=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
