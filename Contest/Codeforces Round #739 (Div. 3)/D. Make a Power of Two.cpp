#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i,n) Case<<" "<<i<<": "<<n<<endl;
#define tc ll t;cin>>t;while(t--)




ll get(string s1,string s2) {
    ll t = 0;
    for (char c : s1) {
        if (c == s2[t])t++;
    }
    return s1.size() - t + s2.size() - t;
}

int main() {
    tc
     {
        string s;
        cin >> s;
        ll res = 20;
        ll t = 1;
        for (ll i = 0; i < 63; i++) {
            res = min(res, get(s, to_string(t)));
            t *= 2;
        }
        cout << res << endl;
    }
    return 0;
}
