#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
const int M = 1e9 + 7;

string solve() {
    int n,t;
    cin>>n>>t;
    vector<int> v(n+1);
    for(int i=1;i<n;i++) cin>>v[i];
    int i=1;
    for(;i<n;i=i+v[i])
        if(i==t) return "YES";
    if(i==t) return "YES";
    return "NO";
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
        cout<<solve()<<endl;
    }
}
