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
ll dc(string s, char c)
{
    ll m=s.sz;
    if (m==1 and s[0]!=c)
        return 1;
    else if(m==1)
        return 0;
    ll cost[2];
    cost[0]=0;
    cost[1]=0;

    for(ll i=0; i<m/2; ++i)
    {
        if(s[i]!=c)
            cost[0]++;
    }
    for(ll i=m/2; i<m; ++i)
    {
        if(s[i]!=c)
            cost[1]++;
    }
    return min(cost[0]+dc(s.substr(m/2, m/2), c+1), dc(s.substr(0, m/2), c+1)+cost[1]);
}

int main()
{
    tc
    {
        ll n;
        cin>>n;
        st s;
        cin>>s;
        char c='a';
        cout<<dc(s,c)<<endl;
    }
}
