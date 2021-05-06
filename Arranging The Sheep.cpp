#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
#define M 1e9 + 7

int solve()
{
    int n, no_of_sheeps, no_of_steps;
    string s;
    cin >> n >> s;
    vector<int> f(n , 0), d(n , 0);

    no_of_sheeps = 0;
    no_of_steps = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
            no_of_sheeps++;
        else
            no_of_steps += no_of_sheeps;
        f[i] = no_of_steps;
    }

    no_of_sheeps = 0;
    no_of_steps = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '*')
            no_of_sheeps++;
        else
            no_of_steps += no_of_sheeps;
        d[i] = no_of_steps;
    }

    int ans = n*n;
    for(int i=0;i<n;i++)
        ans = min(ans,f[i]+d[i]);
    return ans;
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
