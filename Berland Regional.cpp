#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define M 1e9 + 7
#define int ll
const int N = 2e5;

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, vector<int>> miv;
    vector<vector<int>> viv;
    int ta[n];
    for (int i = 0; i < n; i++)
        cin >> ta[i];

    for (int i = 0; i < n; i++)
    {
        int tx;
        cin >> tx;
        miv[ta[i] - 1].push_back(tx);
    }

    for (auto v : miv)
    {
        viv.push_back(v.S);
        sort(viv.back().begin(), viv.back().end(), greater<>());
    }

    for (auto &v : viv)
    {
        int pre = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            v[i] += pre;
            pre = v[i];
        }
    }

    vector<int> xxx(n, 0);

    for (auto v : viv)
    {
        for (int k = 1; k <= v.size(); k++)
        {

            int ind = (v.size() / k) * k;
            if (ind <= v.size() && ind > 0)
                xxx[k - 1] += v[ind - 1];
        }
    }
    for(int i=0;i<n;i++) cout<<xxx[i]<<" ";

    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
