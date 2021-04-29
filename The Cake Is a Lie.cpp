#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define M 1e9 + 7

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        ll r = (a - 1) + a * (b - 1);
        if (r == k)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}
