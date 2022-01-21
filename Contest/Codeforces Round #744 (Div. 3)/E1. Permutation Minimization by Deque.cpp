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
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        deque<ll>dq;
        dq.push_front(arr[0]);
        for(ll i=1;i<n;i++)
        {
          if(dq.front()> arr[i])
              dq.push_front(arr[i]);
          else
            dq.push_back(arr[i]);
        }
        while(!dq.empty())
        {
            cout<<dq.front()<<" ";
            dq.pop_front();
        }
        cout<<endl;


    }
}
