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
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (is_sorted(v.begin(), v.end()))
            cout << 0 << endl;
        else if (v.front() == 1 || v.back() == n)
            cout << 1 << endl;
        else if (v.front() == n && v.back() == 1)
            cout << 3 << endl;
        else
            cout << 2 << endl;
    }
}
