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
    st s;
    cin>>s;
    st t="2020";
    ll j=0;
    if(s==t)
      {
            cout<<"YES"<<endl;
            continue;
      }
     bool flag=true;
     bool f=true;
   for(ll i=0;i<n && j<4;i++,j++)
   {
       if(s[i]!=t[j])
        break;
   }
   ll k=3;
   for(ll i=n-1;i>=0 && k>=j;i--,k--)
   {
       if(s[i]!=t[k])
       {
           flag=false;
           break;
       }
   }
   for(ll i=n-1,j=3;i>=0 && j>=0;i--,j--)
   {
       if(s[i]!=t[j])
        f=false;
   }
   if(flag|| f)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
    }
}
