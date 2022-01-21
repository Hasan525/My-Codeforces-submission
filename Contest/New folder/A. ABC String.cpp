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
int main()
{
    tc
    {
        st s;cin>>s;
        ll cnt=0,res=0,ara[100]={0};
        for(ll i=0; i<s.sz; i++)
        {
            if(s[i]==s[0])
            {
                cnt++;
                ara[i]=1;
            }
            else if(s[i]==s[s.sz-1])
            {
                res++;
                ara[i]=2;
            }

        }
        ll x;
        if(cnt>=res) x=2;
        else x=1;
        for (ll i=0; i<s.sz; i++)
        {
            if(!ara[i]) ara[i]=x;
        }
        ll ans=0,flag=0;
        for(ll i=0; i<s.sz; i++)
        {
            if(ara[i]==1) ans++;
            else ans--;
            if(ans<0)
            {
               cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(ans==0 && flag==0)
            cout<<"YES"<<endl;
        else if(flag==0)
            cout<<"NO"<<endl;
    }


}
