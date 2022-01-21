#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)




int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    tc
    {
        ll n;cin>>n;
        string s;cin>>s;
        bool flag=true;
       for(ll i=0;i<n-1;i++)
       {
          if((s[i]=='a' && s[i+1]=='b') || (s[i]=='b' && s[i+1]=='a'))
          {
              cout<<i+1<<" "<<i+2<<endl;
              flag=false;
              break;
          }
       }
       if(flag)
        cout<<-1<<" "<<-1<<endl;
    }

}
