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
        map<char,ll>mp;
       string s;cin>>s;
       for(ll i=0;i<s.size();i++)
        mp[s[i]]++;
       ll ans=s.size();
       ans-=(2*(min(mp['B'],mp['A'])));
       mp['B']-=min(mp['B'],mp['A']);
       ans-=(2*(min(mp['B'],mp['C'])));
       if(ans==0)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;


    }
}
