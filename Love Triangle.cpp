#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
const int M = 1e9 + 7;

bool solve()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    for(int i=1;i<=n;i++)
        if(v[v[v[i]]]==i)
            return true;
    return false;

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        if(solve()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
