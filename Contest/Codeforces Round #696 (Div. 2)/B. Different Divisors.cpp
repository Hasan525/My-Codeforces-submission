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
ll prime[1000005];
void sieve(){
for(ll i=2;i<=1000000;i++)
    if(!prime[i])
        for(ll j=i*i;j<=1000000;j+=i)
        prime[j]=1;
}
int main (){
    sieve();
    int t;
    cin>>t;
    while(t--){
        ll d,temp;
        cin>>d;
        for(int i=d+1;i<=30000;i++)
        if(!prime[i]){temp=i;break;}

        for(ll i=temp+d;i<=30000;i++)
        if(!prime[i]){temp*=i;break;}
        cout<<temp<<endl;
    }
return 0;
}
