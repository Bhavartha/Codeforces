#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
const int M = 1e9 + 7;

void solve()
{
    int n, col,row;
    cin >> n >> col >> row;
    int ans = row*2;
    vector<int> vi(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> vi[i];
    for (int i = 2; i <= n; i++)
    {
        int t;
        if(abs(vi[i]-vi[i-1])>=2) t=0;
        else if(abs(vi[i]-vi[i-1])==1) t=min(row,col);
        else t=row+min(row,col);
        ans = min(ans,t);
    }
    cout<<ans<<endl;
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
