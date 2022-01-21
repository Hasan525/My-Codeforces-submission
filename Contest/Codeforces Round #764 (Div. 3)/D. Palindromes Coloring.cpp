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

        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            mp[s[i]-'a']++;
        }
        ll o=0,e=0;
        for(ll i=0; i<26; i++)
        {
            if(mp[i]%2)
            {
                o++;
                e+=((mp[i]-1)/2);
            }
            else
                e+=mp[i]/2;
        }
        ll ans=(2*(e/k));
        o+=(2*(e%k));
        if(k<=o)
            ans++;
        cout<<ans<<endl;

    }
}
