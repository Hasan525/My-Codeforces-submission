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
        ll n;cin>>n;
        string s;cin>>s;
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        bool flag=true;
        for(ll i=1;i<n;i++)
        {
            if(i==0)
            {
                if(s[i]==s[i+1])
                {
                    flag=false;
                    break;
                }
            }
            else if(i==n-1)
            {
                if(s[i]==s[i-1])
                {
                    flag=false;
                    break;
                }
            }
            else
            {
                if(s[i]==s[i+1] || s[i]==s[i-1] || s[i+1]==s[i-1])
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
