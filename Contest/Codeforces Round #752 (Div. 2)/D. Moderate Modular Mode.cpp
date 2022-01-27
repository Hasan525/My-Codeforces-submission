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
       ll x,y;cin>>x>>y;
       if(y%x==0)
            cout<<x<<endl;
       else if(x>y)
        cout<<x+y<<endl;
       else
        cout<<y-((y%x)/2)<<endl;
    }
}
