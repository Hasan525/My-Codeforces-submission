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
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
         if(a + b - n - m >= 0 and min(a,b) >= m)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
    }
}
