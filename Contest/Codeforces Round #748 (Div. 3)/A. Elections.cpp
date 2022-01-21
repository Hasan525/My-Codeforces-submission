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
        ll arr[4];
        for(ll i=0; i<3; i++)
            cin>>arr[i];
        ll ma=max(arr[0],max(arr[1],arr[2]));
        ll cnt=0;
        for(ll i=0; i<3; i++)
        {
            if(ma==arr[i])
                cnt++;
        }
        if(cnt==3)
        {
            cout<<1<<" "<<1<<" "<<1<<endl;
            continue;
        }
        if(cnt==2)
        {
            cout<<ma-arr[0]+1<<" ";
            cout<<ma-arr[1]+1<<" ";
            cout<<ma-arr[2]+1<<" ";
            continue;
        }
        if(ma==arr[0])
            cout<<0<<" ";
        else
            cout<<ma-arr[0]+1<<" ";
        if(ma==arr[1])
            cout<<0<<" ";
        else
            cout<<ma-arr[1]+1<<" ";
        if(ma==arr[2])
            cout<<0<<" ";
        else
            cout<<ma-arr[2]+1<<" ";
        cout<<endl;


    }
}
