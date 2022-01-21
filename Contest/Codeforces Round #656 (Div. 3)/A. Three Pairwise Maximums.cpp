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
        ll k=0,i,x,y,z,mx,mn,n;
        cin>>x>>y>>z;
        mx=max(x,max(y,z));
        mn=min(x,min(y,z));
        if(x==z && y<=x)
            cout<<"YES"<<endl<<mn<<" "<<mx<<" "<<mn<<endl;
        else if(y==z && x<=y)
            cout<<"YES"<<endl<<mn<<" "<<mx<<" "<<mn<<endl;
        else if(x==y && z<=y)
            cout<<"YES"<<endl<<mn<<" "<<mx<<" "<<mn<<endl;
        else
            cout<<"NO"<<endl;
    }
}

