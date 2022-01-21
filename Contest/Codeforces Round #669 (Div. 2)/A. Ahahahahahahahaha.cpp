#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define                   vi vector<ll>
#define                   vpi vector<pair<ll,ll> >
#define                   mpi map<ll,ll>
#define                   si set<ll>
#define                   pq prority_queue<ll>
#define                   pqi  priority_queue<pair<ll, ll> >
#define                   rep(i,a,n) for(ll i=a;i<n;i++)
#define                   reP(i,a,n) for(ll i=a;i<=n;i++)
#define                   YES cout<<"YES\n";
#define                   NO cout<<"NO\n";
#define                   mp make_pair
#define                   pb push_back
#define                   fi first
#define                   se second
#define                   st string
#define                   sz size()
#define                   case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define                   tc ll t;cin>>t;while(t--)
                           //priority_queue<ll ,vector<ll>,greater<ll> > q;
int main()
{
    tc
    {
        ll a=0,b=0,c=0,e=0;
        ll n;cin>>n;
        ll ara[n];
        for(ll i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i%2)
                a+=ara[i];
            else
                b+=ara[i];
            if(ara[i])
                c++;
            else
                e++;
        }
        c=c/2;
        c*=2;
        if(c>=n/2)
        {
            cout<<c<<endl;
            for(ll i=0;i<c;i++)
                cout<<1<<" ";
                //cout<<"a"<<endl;
            cout<<endl;
        }
        else if(e>=n/2)
        {
             cout<<n/2<<endl;
            for(ll i=0;i<n/2;i++)
                cout<<0<<" ";
            cout<<endl;
        }
        else if(a==b)
        {
            cout<<n<<endl;
            for(ll i=0;i<n;i++)
                cout<<ara[i]<<" ";
        }
        else if(a>b and b!=0)
        {
           ll d=a-b;
           cout<<b*2<<endl;
           for(ll i=0;i<n;i++)
           {
               if(i%2 and d!=0 and ara[i])
               {
                   d--;
                   continue;
               }
               cout<<ara[i]<<endl;
           }
        }
        else if(a<b and a!=0)
        {
            ll d=b-a;
            cout<<a*2<<endl;
            for(ll i=0;i<n;i++)
            {
               if(i%2==0 and d!=0 and ara[i])
               {
                   d--;
                   continue;
               }
               cout<<ara[i]<<endl;
            }

        }

    }

}
