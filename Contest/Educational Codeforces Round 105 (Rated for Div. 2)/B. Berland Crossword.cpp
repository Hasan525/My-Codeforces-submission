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
        ll n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        if(a==n)
        {
            if(c==n)
            {
                if(d<2||b<2)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else if(c==n-1)
            {
                if((d<2&&b<2)||d<1||b<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else
            {
                if(d<1||b<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
        }
        if(c==n)
        {
            if(a==n)
            {
                if(d<2||b<2)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else if(a==n-1)
            {
                if(d<2&&b<2||d<1||b<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else
            {
                if(d<1||b<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
        }
        if(a==n-1)
        {
            if(c==n-1)
            {
                if(d+b<2)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else
            {
                if(d+b<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
        }
        if(c==n-1)
        {
            if(a==n-1)
            {
                if(d+b<2)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else
            {
                if(d+b<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
        }

        if(d==n)
        {
            if(b==n)
            {
                if(a<2||c<2)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else if(b==n-1)
            {
                if(a<2&&c<2||a<1||c<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else
            {
                if(a<1||c<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
        }
        if(b==n)
        {
            if(d==n)
            {
                if(a<2||c<2)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else if(d==n-1)
            {
                if(a<2&&c<2||a<1||c<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else
            {
                if(a<1||c<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
        }
        if(d==n-1)
        {
            if(b==n-1)
            {
                if(a+c<2)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else
            {
                if(a+c<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
        }
        if(b==n-1)
        {
            if(d==n-1)
            {
                if(a+c<2)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else
            {
                if(a+c<1)
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
        }
        cout<<"YES"<<endl;
    }
}
