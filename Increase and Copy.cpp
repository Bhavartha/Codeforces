#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
const int M = 1e9 + 7;

int solve() {
    double n;
    cin>>n;
    double sq = ceil(sqrt(n));
    return (sq-2)+ceil((n/sq));
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        cout<<solve()<<endl;
    }
}
