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
       vector<char>v;
        ll n;cin>>n;
    st s;cin>>s;
    for(ll i=0;i<n;i++)
    {
       if(s[i]=='t'|| s[i]=='r'|| s[i]=='y'|| s[i]=='g'|| s[i]=='u'|| s[i]=='b')
       {
           v.pb(s[i]);
           s[i]='0';
       }
    }
    ll j=0;
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            s[i]=v[j];
            j++;
        }
    }
    cout<<s<<endl;
   }

}
