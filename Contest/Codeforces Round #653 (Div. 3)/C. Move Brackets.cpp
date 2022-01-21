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
const int N=100024;
vi v[N];
int main()
{
   tc
   {
        ll n,c=0,d=0;cin>>n;
    st s;cin>>s;
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='(')
            c++;
        else if(s[i]==')' && c>0)
            c--;
        else
        cnt++;
    }
    cout<<cnt<<endl;
   }
}
