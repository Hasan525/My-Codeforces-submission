#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,c=0,d;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
          if(s[i]!='1')
                c++;
          else
          {
             d=i;
             break;
          }
        }
        if(c==n)
        {
            for(int i=0; i<n; i++)
        {
            if(s[i]=='2')
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='2')
                cout<<"1";
            else
                cout<<"0";
        }
         cout<<endl;
        }
        else
        {
           for(int i=0; i<=d; i++)
           {
               if(s[i]=='2')
                cout<<"1";
                else
                    cout<<s[i];
           }
           for(int i=d+1; i<n; i++)
                cout<<"0";
           cout<<endl;
           for(int i=0; i<=d; i++)
           {
               if(s[i]=='2')
                cout<<"1";
                else
                    cout<<"0";
           }
           for(int i=d+1; i<n; i++)
                cout<<s[i];
           cout<<endl;
        }
    }
}
