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
        bool flag=false;
       ll n;cin>>n;
       ll x;
       if(n%2==0)
       {
           cout<<0<<endl;
           continue;
       }
       while(n)
       {
           x=n%10;
           if(x%2==0)
           {
              flag=true;
           }
           n/=10;
       }
       if(flag)
       {
           if(x%2==0)
            cout<<1<<endl;
           else
            cout<<2<<endl;
       }
       else
        cout<<-1<<endl;

    }
}
