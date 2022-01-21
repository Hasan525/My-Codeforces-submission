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
        string s,st;
        cin>>s>>st;
        map<char,ll>mp;
        for(ll i=0; i<s.size(); i++)
            mp[s[i]]=i+1;
        ll ans=0;
        for(ll i=0; i<st.size()-1; i++)
        {
            ans+=abs(mp[st[i]]-mp[st[i+1]]);
        }
        cout<<ans<<endl;
    }
}
