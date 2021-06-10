#include "bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define int long long
#define all(x) (x).begin(), (x).end()

const int M = 1e9 + 7;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int mn = min_element(all(v)) - v.begin();
    int mx = max_element(all(v)) - v.begin();
    int a = min(mn,mx)+1;
    int b = max(mn,mx)+1;
    cout<<min({b,n-a+1,a+n-b+1})<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
