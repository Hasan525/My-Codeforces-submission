#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<int>
#define vpi vector<pair<int,int> >
#define mpi map<int,int>
#define  si set<int>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define reP(i,a,n) for(int i=a;i<=n;i++)
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
    tc
    {
        vi v;
    ll n;cin>>n;
    ll ara[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    ll j=0;
    v.pb(ara[0]);
    for(ll i=0;i<n-1; )
    {
      if(ara[i]<=ara[i+1])
      {
          while(ara[i]<=ara[i+1] and i<n-1)
            i++;
      }
      else
      {
          while(ara[i]>=ara[i+1] and i<n-1)
            i++;
      }
      v.pb(ara[i]);
    }
    cout<<v.sz<<endl;
    for(ll i=0;i<v.sz;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    }
}
