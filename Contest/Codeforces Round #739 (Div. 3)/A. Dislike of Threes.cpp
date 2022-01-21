#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)




int main()
{
    tc
    {
       ll n;cin>>n;
       ll ans=0;
       ll m=1;
       while(ans!=n)
       {
           if(m%3 && m%10!=3)
            ans++;
           m++;
       }
       cout<<m-1<<endl;
    }
}
