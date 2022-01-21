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
        ll n;cin>>n;ll ara[2*n];
    for(ll i=0;i<2*n;i++)
    {
        cin>>ara[i];
    }
    mpi chk;
    for(ll i=0;i<2*n;i++)
    {
        if(chk[ara[i]]==0)
        {
            cout<<ara[i]<<" ";
            chk[ara[i]]++;
        }
    }
    cout<<endl;
    }
}
