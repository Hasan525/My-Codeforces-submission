#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<int>
#define vpi vector<pair<int,int> >
#define mpi map<int,int>
#define  si set<int>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define reP(i,a,n) for(int i=a;i<=n;i++)
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
        ll n,k;cin>>n>>k;
        st s;cin>>s;
        ll ans=0,cnt=0,c=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                cnt=0;
                while(i<n and s[i]=='0')cnt++,i++;
                if(c!=0)cnt-=k;
                if(i!=n)cnt-=k;
                ans+=(cnt+k)/(k+1);
            }
            c=1;
        }
        cout<<ans<<endl;
    }
}
