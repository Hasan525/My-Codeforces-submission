#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
#define mpm map<vector<ll>,ll>
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
        ll n,k;cin>>n>>k;
        ll ara[n];
        ll sum=0;
        for(ll i=0;i<n;i++)
            {
                cin>>ara[i];
                sum+=ara[i];
            }
        if(sum==k)
        {
            cout<<"NO"<<endl;
           continue;
        }
         sum=0;
        for(ll i=0;i<n;i++)
        {
            sum+=ara[i];
            if(sum==k)
            {
                swap(ara[i],ara[i+1]);
            }

        }
        cout<<"YES"<<endl;
        for(ll i=0;i<n;i++)
            cout<<ara[i]<<" ";
        cout<<endl;
    }
}
