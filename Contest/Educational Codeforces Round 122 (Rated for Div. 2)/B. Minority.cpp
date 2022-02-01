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
      string s;cin>>s;
      map<char,ll>mp;
      ll n=s.size();
      for(ll i=0;i<n;i++)
      {
          mp[s[i]]++;
      }
      if(mp['0']==mp['1'])
          cout<<mp['1']-1<<endl;
      else if(mp['1']>mp['0'])
        cout<<mp['0']<<endl;
      else
        cout<<mp['1']<<endl;
    }
}
