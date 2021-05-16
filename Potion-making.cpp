#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
const int M = 1e9 + 7;

int32_t main()
{
    FASTIO
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int g = __gcd(n,100-n);
        cout<<100/g<<endl;
    }
}
