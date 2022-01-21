
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
        ll ans=INT_MAX,cnt=0;
        string s;cin>>s;
        ll n=s.size();
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]=='5')
                cnt++;
            else if((s[i]=='2' || s[i]=='7')&& cnt)
            {
                ans=n-(i+2);
                break;
            }
        }
        cnt=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]=='0' and cnt==0)
                cnt++;
            else if((s[i]=='0' || s[i]=='5')&& cnt)
            {
                ans=min(n-(i+2),ans);
                break;
            }
        }
        cout<<ans<<endl;
    }
}
