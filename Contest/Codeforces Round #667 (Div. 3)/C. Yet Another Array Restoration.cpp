#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define vpi vector<pair<ll,ll> >
#define mpi map<ll,ll>
#define  si set<ll>
#define pq prority_queue<ll>
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
    ll n,x,y;cin>>n>>x>>y;
    ll i,j,ans=0;
    ll ara[n];
    for(i=0; ;i++)
    {
        ll m=x;
        ll d=n;
        d--;
        while(d--)
        {
            m+=i;
            if(m==y)
                break;
        }
        if(m==y)
        {
            ans=i;
            break;
        }
    }
    //cout<<ans<<endl;
    ara[0]=x;
    ll cnt=1;
   for(i=1;i<n;i++)
   {
       if(ara[i-1]+ans>y)
        break;
       else
       {
           ara[i]=ara[i-1]+ans;
           cnt++;
       }
   }
   //cout<<ara[0]<<ara[1]<<endl;
   ll res=ara[i-1];
   ll sum=x;
   //cout<<cnt<<res<<endl;
   if(cnt<n)
   {
       for(j=i;j<n;j++)
       {
           if(sum-ans<=0)
            break;
           else
           {
               sum-=ans;
               ara[j]=sum;
               cnt++;
           }
       }
   }
   //cout<<j<<endl;
   //cout<<cnt<<endl;
   if(cnt<n)
   {
       for(ll k=j;k<n;k++)
   {
       res+=ans;
       ara[k]=res;
   }
   }
   for(ll i=0;i<n;i++)
    cout<<ara[i]<<" ";
   cout<<endl;
}
}
