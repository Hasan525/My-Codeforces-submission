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
        ll n;
        cin>>n;
        ll arr[n+1];
        for(ll i=0; i<n; i++)
            cin>>arr[i];
        if(arr[0]!=n && arr[n-1]!=n)
        {
            cout<<-1<<endl;
            continue;
        }

        if(arr[0]==n)
        {
            cout<<n<<" ";
            for(ll i=n-1; i>0; i--)
                cout<<arr[i]<<" ";
                cout<<endl;

        }
        else if(arr[n-1]==n)
        {
            for(ll i=n-2; i>=0; i--)
                cout<<arr[i]<<" ";
            cout<<n<<endl;
        }

    }
}
