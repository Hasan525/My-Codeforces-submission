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
        priority_queue<ll, vector<ll>,greater<ll> > pq;
        queue<ll>q;
        ll n,x;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            q.push(x);
        }
        ll ans=-1000000000;
        while(1)
        {
            while(!q.empty())
            {
                pq.push(q.front());
                q.pop();
            }
            x=pq.top();
            ans=max(x,ans);
            pq.pop();
            if(pq.empty())
                break;
            while(!pq.empty())
            {
                ll y=pq.top();
                pq.pop();
                q.push(y-x);
            }
        }
       cout<<max(x,ans)<<endl;

    }
}
