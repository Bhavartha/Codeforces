#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
const int M = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vvi(n, vector<int>(m));
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            vp.push_back({x, i});
        }
    sort(vp.begin(), vp.end());

    for (int i = 0; i < m; i++)
    {
        auto p = vp[i];
        vvi[p.S][i] = p.F;
    }

    for (int i = m; i < n * m; i++)
    {
        auto p = vp[i];
        for (auto &it : vvi[p.S])
            if (it == 0)
            {
                it = p.F;
                break;
            }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout<<vvi[i][j]<<" ";
        cout<<endl;
    }
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
        solve();
    }
}
