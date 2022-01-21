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
        string t="";
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='U')
                t+='D';
            else if(s[i]=='D')
                t+='U';
            else
                t+=s[i];
        }
        cout<<t<<endl;
    }
}
