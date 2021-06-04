#include "bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define int long long
#define all(x) (x).begin(), (x).end()

const int M = 1e9 + 7;

string solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> v = {a,b,c,d};
    sort(v.begin(),v.end());
    if((max(a,b)+max(c,d))==(v[2]+v[3]))
        return "YES";
    return "NO";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        cout<<solve()<<endl;
}
