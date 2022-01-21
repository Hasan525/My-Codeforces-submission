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
        ll x;
        cin>>x;
        ll m=x;
        vi v;
        ll n=9;
        if(x/10==0)
        {
            cout<<x<<endl;
            continue;
        }
        mpi check;
        while(x/10)
        {
            v.pb(n);
            x-=n;
            check[n]++;
            n--;
        }
        ll c=x;
        //cout<<c<<endl;
        while(c>=1)
        {
            while(check[c])
            {
               c--;
            }
            if(c<1)
                break;
                v.pb(c);
                check[c]++;
               x-=c;
                c=x;
                //cout<<x<<endl;
        }
        //cout<<x<<endl;
        ll sum=0;
        reverse(v.begin(),v.end());
        bool flag=true;
        for(ll i=0; i<v.sz; i++)
           {
                if(check[v[i]]>1)
                flag=false;
                sum+=v[i];
           }
        if(flag && m==sum)
        {
            for(ll i=0; i<v.sz; i++)
                cout<<v[i];
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
