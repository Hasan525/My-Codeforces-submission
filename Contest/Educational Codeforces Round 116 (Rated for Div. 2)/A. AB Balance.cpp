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
        string s;
        cin>>s;
        ll a=0,b=0;
        ll n=s.size();
        for(ll i=0; i<n-1; i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
                a++;
            else  if(s[i]=='b' && s[i+1]=='a')
                b++;
        }
        if(a==b)
        {
            cout<<s<<endl;
            continue;
        }
       if(s[n-1]=='a')
        s[n-1]='b';
       else
        s[n-1]='a';
       cout<<s<<endl;
    }
}
