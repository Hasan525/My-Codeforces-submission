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
        ll n;
    cin>>n;
    ll ara[2*n+1];
    for(ll i=1; i<=2*n; i++)
        cin>>ara[i];

    sort(ara+1,ara+2*n+1);

    ll j=2*n,i=1;
    while(i<j)
    {
        if(j>=i)
        {
            cout<<ara[j]<<" ";
            j--;
        }
        if(i<=j)
        {
            cout<<ara[i]<<" ";
            i++;
        }
    }
    cout<<endl;
    }
}
