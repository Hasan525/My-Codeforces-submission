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
        map<char,ll>mp;
       for(ll i=0;i<n;i++)
       {
           st s;
           cin>>s;
           for(ll j=0;j<s.sz;j++)
            mp[s[j]]++;
       }
        ll flag=1;
        for(ll i='a'; i<='z'; i++)
        {
            if(mp[i]%n)
                flag=0;
                //cout<<mp[i]<<" "<<flag<<endl;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
