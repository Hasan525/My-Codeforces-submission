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
      ll l,r,k;cin>>l>>r>>k;
      if(l==r && l>1)
      {
          cout<<"YES"<<endl;
          continue;
      }
      if(l%2)
      {
          r++;
      }
      ll cnt=(r-l)/2;

      if((r-l)%2)
        cnt++;
      if(cnt<=k)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;


    }
}
