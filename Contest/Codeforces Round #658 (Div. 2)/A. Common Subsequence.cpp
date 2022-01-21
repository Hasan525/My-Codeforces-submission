
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
  tc
  {
        ll n,m;cin>>n>>m;
    ll a[n],b[m];
    mpi c,d;
    for(ll i=0;i<n;i++)
       {
            cin>>a[i];
            c[a[i]]++;
       }
    for(ll i=0;i<m;i++)
       {
            cin>>b[i];
            d[b[i]]++;
       }
       ll i,flag=0;
    for( i=0;i<n;i++)
    {
        if(c[a[i]] and d[a[i]])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
        cout<<1<<" "<<a[i]<<endl;
    }
    else
        cout<<"NO"<<endl;
  }
}
