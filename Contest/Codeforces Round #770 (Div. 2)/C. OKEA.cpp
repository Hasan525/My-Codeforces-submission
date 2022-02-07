#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)





int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    tc
    {
       ll n,k;cin>>n>>k;
       ll cnt=n*k;
       ll even=cnt/2;
       ll odd=even;
       if(cnt%2)
            odd++;
       if(odd%k==0 && even%k==0)
       {
           cout<<"YES"<<endl;
           ll res=1;
           for(ll i=1;i<=odd;i++)
           {
              cout<<res<<" ";
              if(i%k==0)
                cout<<endl;
              res+=2;
           }
           res=2;
           for(ll i=1;i<=even;i++)
           {
              cout<<res<<" ";
              if(i%k==0)
                cout<<endl;
              res+=2;
           }
       }
       else
        cout<<"NO"<<endl;
    }
}
