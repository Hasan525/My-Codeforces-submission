#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mxn = 2e5+10;
int a[mxn];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map <int,int> mark;
        int n, num = 0, mx = 0, mn = 0, i, j;
        cin>>n;


        /////////////////
        for(i = 0; i < n; i++)
        {
            cin>>a[i];
            mark[a[i]]++;
        }


        ///////////////
        for(i = 1; i <= n; i++)
            if(mark[i])
          num++;



          ///////////////////
        for(i = 1; i<=n; i++)
        {
            if(mark[i] != 0)
            {
                mn=min(num, mark[i]-1);
                if(mark[i] <= num)
                    mn=min(num-1, mark[i]);
            }
            mx = max(mx,mn);
        }


        cout<<mx<<endl;

    }
}

