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
        string s,ans;cin>>s;
        bool flag=true;
        for(ll i=0;i<n;i++)
        {
            ll cnt=s[i]-'0';
            if(s[i]=='1')
               {
                    cout<<1<<endl;
                    cout<<s[i]<<endl;
                    goto bc;
                }
            for(ll k=2;k<cnt;k++)
            {
                if(cnt%k==0)
                {
                    cout<<1<<endl;
                    cout<<s[i]<<endl;
                    goto bc;
                }
            }
            for(ll j=i+1;j<n && flag ;j++)
            {
                ll res=s[j]-'0';
                ll cont=(cnt*10)+res;
                for(ll k=2;k<cont and cont;k++)
                {
                   if(cont%k==0)
                   {
                     ans+=s[i];
                     ans+=s[j];
                     flag=false;
                     break;
                   }
                }

            }
        }
        cout<<2<<endl;
        cout<<ans<<endl;
        bc: continue;
    }
}
