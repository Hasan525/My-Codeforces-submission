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

    tc{
        st s;
        cin>>s;
        ll n=s.sz,d=0,c=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='1' && s[i+1]=='1' && d==0)
            {
                d++;
            }
            else if(s[i]=='0' && s[i+1]=='0' && d)
            {
                c=1;
                break;
            }

        }
        if(!c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
