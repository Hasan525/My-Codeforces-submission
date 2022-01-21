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
        ll cnt =sqrt(n);
        ll res=n-(cnt*cnt);
        if(res==0)
        {
            cout<<cnt<<" "<<1<<endl;
        }
        else if(res>cnt)
        {
            res-=cnt;
            cout<<cnt+1<<" "<<cnt-res+2<<endl;
        }
        else
        {
            cout<<res<<" "<<cnt+1<<endl;
        }
    }
}
