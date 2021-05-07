#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
#define M 1e9 + 7

string solve()
{
    int n;
    cin >> n;
    while(n%2==0) n/=2;
    if(n<=2) return "NO";
    return "YES";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        cout << solve() << endl;
    }
}
