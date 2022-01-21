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
        ll a,b,c;cin>>a>>b>>c;
        if(a>b)
            swap(a,b);
        if(a==c)
           {
                cout<<b<<endl;
                continue;
           }
        if(b==c)
            {
                cout<<a<<endl;
                continue;
            }
        ll cnt=a-1;
        ll ans=b-a-1;
        ans-=cnt;
        //cout<<ans<<endl;
        if(ans<0 || c>ans+b)
           {
                cout<<-1<<endl;
                continue;
           }
        ans+=b;
        //cout<<ans<<endl;
        cnt=b-a;
        if(c>b)
        {
            if(c+cnt<=ans)
                cout<<c+cnt<<endl;
            else if(b>c-cnt && a<c-cnt)
                cout<<c-cnt<<endl;
            else
                cout<<-1<<endl;
        }
        else if(c<b && a<c)
        {
            if(c+cnt<=ans && b<c+cnt)
                cout<<c+cnt<<endl;
            else if(a>c-cnt && 1<=c-cnt)
                cout<<c-cnt<<endl;
            else
                cout<<-1<<endl;
        }
        else
        {
            if(cnt>1 && cnt+c<=ans)
                cout<<cnt+c<<endl;
            else if(cnt>1 && c-cnt>=1)
                cout<<c-cnt<<endl;
            else
                cout<<-1<<endl;

        }
    }

}
