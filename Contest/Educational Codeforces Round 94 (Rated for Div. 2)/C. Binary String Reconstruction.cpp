#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
#define  si set<ll>
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
        st s;cin>>s;
        ll x;cin>>x;
        st t=st(s.sz,'1');
        for(ll i=0;i<s.sz;i++)
        {
            if(s[i]=='0')
            {
                if(i>=x)
                    t[i-x]='0';
                if(i+x<s.sz)
                    t[i+x]='0';
            }
        }
        bool ok = true ;
        for(ll i=0;i<s.sz;i++)
        {
            if(s[i]=='1')
            {
                if((i>=x && t[i-x]=='1') || (i+x<s.sz and t[i+x]=='1'))
                    ok=true;
                else
                {
                    ok=false;
                    break;
                }
            }
        }
        if(ok)
            cout<<t<<endl;
        else
            cout<<-1<<endl;
    }
}
