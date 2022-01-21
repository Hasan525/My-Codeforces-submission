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
    ll n,k,res=0,cnt=0;
    cin>>n>>k;
    vi a;
    vi b;
    vi c;
    for(ll i=0; i<n; i++)
    {
        ll t,x,y;
        cin>>t>>x>>y;
        if(x==1 && y==1)
        {
            a.pb(t);
            cnt++;
            res++;
        }
        if(x==0 && y==1)
        {
            b.pb(t);
            cnt++;
        }
        if(x==1 && y==0)
        {
            c.pb(t);
            res++;
        }
    }
    if(res<k || cnt<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    cnt =0,res=0;
    ll i,j,flag=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    for( i=0;i<a.sz && k ;i++)
    {
       res+=a[i];
       flag=1;
       k--;
    }
    //cout<<res<<endl;
    ll d=i-1;
    for( i=0;i<b.sz and k and i<c.sz;i++)
    {
       res+=b[i];
       res+=c[i];
       k--;
    }
    for(j=i;j<b.sz and j<c.sz and d>=0 ;j++)
    {
      if(b[j]+c[j]<a[d] && flag)
      {
          res-=a[d];
          res+=(b[j]+c[j]);
          d--;
      }
      else
        break;
    }
    cout<<res<<endl;
}
