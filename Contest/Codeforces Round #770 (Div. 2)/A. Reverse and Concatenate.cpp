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
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        string t=s;
        reverse(s.begin(),s.end());
        if(s!=t && k)
        cout<<2<<endl;
        else
            cout<<1<<endl;


    }


}
