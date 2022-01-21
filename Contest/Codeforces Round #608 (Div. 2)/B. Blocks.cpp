#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<int>
#define vpi vector<pair<int,int> >
#define mpi map<int,int>
#define  si set<int>
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define reP(i,a,n) for(ll i=a;i<=n;i++)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define st string
#define sz size()
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)
int main()
{
    ll n;
    st s;
    cin>>n>>s;
    vi v;
    for(ll i=0; i<n-1; i++)
    {
        if(s[i]=='B')
        {
            s[i]='W';
            s[i+1]=(s[i+1]=='B')?'W':'B';
            v.pb(i+1);
        }
    }
    if(s[n-1]=='B')
    {
        for(ll i=n-1; i>0; i--)
        {
            if(s[i]=='W')
            {
                s[i]='B';
               s[i-1]=(s[i-1]=='B')?'W':'B';
               v.pb(i);
            }
        }
         if(s[0]=='W')
         {
             cout<<-1<<endl;
             return 0;
         }
    }
    cout<<v.sz<<endl;
    for(ll i=0;i<v.sz;i++)
        cout<<v[i]<<" ";

}
