#include<bits/stdc++.h>
#define ll long long int
#define tc ll t;cin>>t;while(t--)
#define sz size()
#define st string
using namespace std;
int main()
{
    tc
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b)
        {
            cout<<b<<endl;
            continue;
        }
        else if(c<=d)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            ll res=a-b;
            ll cnt=res/(c-d);
            if(res%(c-d)!=0)
                cnt++;
            cout<<b+(cnt*c)<<endl;
        }

    }
}
