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
        st s;cin>>s;
        st t="",d="";
        if(s[0]=='0')
        {
            d+="1";
            t+="1";
        }
        else
        {
            d+="2";
            t+="1";
        }
        for(ll i=1;i<n;i++)
        {
            if(s[i]=='0' && d[i-1]=='0')
            {
                d+="1";
                t+="1";
            }
            if(s[i]=='0' && d[i-1]=='1')
            {
                d+="0";
                t+="0";
            }
            if(s[i]=='0' && d[i-1]=='2')
            {
                d+="1";
                t+="1";
            }
            if(s[i]=='1' && d[i-1]=='0')
            {
                d+="2";
                t+="1";
            }
            if(s[i]=='1' && d[i-1]=='1')
            {
                d+="2";
                t+="1";
            }
            if(s[i]=='1' && d[i-1]=='2')
            {
                d+="1";
                t+="0";
            }
        }
        cout<<t<<endl;
    }
}
