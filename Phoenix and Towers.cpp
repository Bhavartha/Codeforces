#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define int long long
#define M 1e9 + 7

void solve()
{
    long long n, mx_diff, n_towers;
    cin >> n >> n_towers >> mx_diff;
    multiset<pair<int, int>> tower_heights;
    for (int i = 0; i < n_towers; i++)
        tower_heights.insert({0, i});
    vector<int> blocks(n);
    for (int i = 0; i < n; i++)
        cin >> blocks[i];
    vector<int> blocks_og = blocks;
    sort(blocks.begin(), blocks.end(), greater<int>());
    unordered_map<int, vector<int>> um;
    for (auto b : blocks)
    {
        pair<int,int> p = *tower_heights.begin();
        tower_heights.erase(tower_heights.begin());
        p.F = p.F + b;
        tower_heights.insert(p);
        um[b].push_back(p.S+1);
    }
    auto mn = *tower_heights.begin();
    auto mx = *tower_heights.rbegin();
    if ((mx.F - mn.F) > mx_diff)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (auto b : blocks_og)
        {
            cout << *um[b].rbegin() << " ";
            um[b].pop_back();
        }
        cout << endl;
    }
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
