#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)

ll xo(ll a)
{
    if(a%4==0)
        return a;
    else if(a%4==1)
        return 1;
    else if(a%4==2)
        return a+1;
    else
        return 0;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    tc
    {
      ll a,b;cin>>a>>b;
      if(a==1)
      {
          if(b==0)
            cout<<1<<endl;
          else if(b==1)
            cout<<3<<endl;
          else
            cout<<2<<endl;
          continue;
      }
      ll cur=xo(a-1);
      if(cur==b)
      {
          cout<<a<<endl;
          continue;
      }
      cur^=b;
      if(cur!=a)
        cout<<a+1<<endl;
      else
        cout<<a+2<<endl;

    }
}
