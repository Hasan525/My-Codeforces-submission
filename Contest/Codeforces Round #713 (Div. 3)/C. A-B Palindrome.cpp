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
        ll n,k,a,b;
        cin>>a>>b;
        n=a,k=b;
        st s;
        cin>>s;
        map<char,ll>mp;
        for(ll i=0; i<s.sz; i++)
        {
            mp[s[i]]++;
        }
        ll i=0,j=s.sz-1;
        while(i<j)
        {
            if(s[i]!='?' && s[j]=='?')
            {
                s[j]=s[i];
                mp[s[i]]++;
            }
            else if(s[j]!='?' && s[i]=='?')
            {
                s[i]=s[j];
                mp[s[j]]++;
            }
            i++;
            j--;
        }
        //cout<<s<<endl;
        i=0,j=s.sz-1;
        a=a-mp['0'];
        if(a<0)
            a=0;
        b=b-mp['1'];
        if(b<0)
            b=0;
        //cout<<a<<b<<endl;
        bool flag=false;
        while(i<=j)
        {
            if(s[j]==s[i] && s[j]=='?' && i!=j)
            {
                if(a>=2)
                {
                    s[i]='0';
                    s[j]='0';
                    a-=2;
                }
                else if(b>=2)
                {
                    s[i]='1';
                    s[j]='1';
                    b-=2;
                }
                else
                {
                    flag=true;
                    break;
                }
            }
            if(i==j and s[i]=='?')
            {
                if(a)
                {
                    s[i]='0';
                    a--;
                }
                else if(b)
                {
                    s[i]='1';
                    b--;
                }
                else
                {
                    flag=true;
                    break;
                }
            }
            i++;
            j--;
        }
        mp.clear();
        i=0,j=s.sz-1;
        while(i<=j)
        {
            if(s[i]=='?')
                flag=true;
            if(s[i]!=s[j])
                flag=true;
           mp[s[i]]++;
           if(i!=j)
             mp[s[j]]++;
            i++;
            j--;

        }
        //cout<<mp['0']<<" "<<mp['1']<<endl;
        if(mp['0']>n || mp['1']>k || flag)
            cout<<-1<<endl;
        else
            cout<<s<<endl;


    }
}
