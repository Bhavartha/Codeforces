#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define M 1e9 + 7

string solve()
{
    long long n, i;
    double d;
    cin >> n;
    if (n % 2 != 0)
        return "NO";
    d = sqrt(n / 2);
    i = d;
    if (i == d)
        return "YES";
    if (n % 4 != 0)
        return "NO";
    d = sqrt(n / 4);
    i = d;
    if (i == d)
        return "YES";
    return "NO";
}

int main()
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
