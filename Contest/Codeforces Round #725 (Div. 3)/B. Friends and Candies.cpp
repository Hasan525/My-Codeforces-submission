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
        ll n;cin>>n;
        ll ara[n];
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if(sum%n)
            {
                cout<<-1<<endl;
                continue;
            }
        sort(ara,ara+n);
        ll cnt=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(ara[i]<=(sum/n))
                break;
            else
                cnt++;
        }
        cout<<cnt<<endl;


    }
}
