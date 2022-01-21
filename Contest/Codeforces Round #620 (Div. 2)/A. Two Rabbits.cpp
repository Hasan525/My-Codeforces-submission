#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll d=y-x;
        ll e=a+b;
        if(d%e==0)
            cout<<d/e<<endl;
        else
            cout<<"-1"<<endl;
    }
}
