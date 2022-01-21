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
       string st=s;
       sort(st.begin(),st.end());
       cout<<st[0]<<" ";
       ll a=1;
       for(ll i=0;i<s.size();i++)
       {
           if(st[0]==s[i] && a)
            {
                a=0;
                continue;
            }
            cout<<s[i];

       }
       cout<<endl;

    }

}
