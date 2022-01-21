#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, a, b, c;

        cin >> n;
        a = 3;
        b = 4;
        while(n % a != 0)
        {
            a += b;
            b *=2;
        }
        cout << n/a << endl;
    }
}
