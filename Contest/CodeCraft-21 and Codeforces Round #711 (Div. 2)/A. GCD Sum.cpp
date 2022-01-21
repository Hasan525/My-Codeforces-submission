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
#define mx -10000000000000;
#define EMPTY_VALUE -1
int main()
{
    tc
    {
        ll n;cin>>n;
        ll i;
        for( i=n; ;i++)
        {
            ll x=i;
            ll sum=0;
            while(x>0)
            {
                sum+=(x%10);
                x/=10;
            }
            if(__gcd(sum,i)>1)
                break;

        }
        cout<<i<<endl;
    }
}
