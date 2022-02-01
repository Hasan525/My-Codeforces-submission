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
        ll rs=n%7;
        ll cnt=n%10;
        if(cnt-rs>=0)
             cout<<n-rs<<endl;
        else
           cout<<n+(7-rs)<<endl;
    }
}
