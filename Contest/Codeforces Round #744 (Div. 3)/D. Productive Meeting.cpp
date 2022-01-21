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
        ll x,n;
        cin>>n;
        priority_queue<pair<ll,ll> > pq;

        for(ll i=0; i<n; i++)
        {
            cin>>x;
            pq.push(make_pair(x,i+1));
        }

        vector<pair<ll,ll> >ans;
        while(pq.size()>=2)
        {
            ll l=pq.top().second;
            ll val=pq.top().first;
            pq.pop();
            ll c=pq.top().second;
            ll cnt=pq.top().first;
            pq.pop();
            if(val && cnt)
            {
                val--;
                cnt--;
                ans.push_back(make_pair(l,c));
            }
            if(val)
            {
               pq.push(make_pair(val,l));
            }
            if(cnt)
            {
               pq.push(make_pair(cnt,c));
            }

        }

        cout<<ans.size()<<endl;
        for(ll i=0; i<ans.size(); i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }


    }
}
