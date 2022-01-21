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
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)
int main()
{
   tc
   {
        ll n,x,sum=0;cin>>n>>x;
    ll ara[n];
    for(ll i=0;i<n;i++)
        cin>>ara[i];
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        sum+=ara[i];
        if(sum%x)
            ans=max(ans,i+1);
    }
    sum=0;
    for(ll i=n-1;i>=0;i--)
    {
        sum+=ara[i];
        if(sum%x)
            ans=max(ans,n-i);
    }
    if(ans)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;
   }
}
