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
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    // int s = (n)*(n+1)/2;
    int c=0;
    for(int i=1;i<=n;i++){
        int t = v[i];
        for(int j=1;j*t-i<=n;j++){
            if(j*t-i <= i) continue;
            if(j == v[j*t-i]){
                // cout<<i<<" "<<j<<" "<<t<<endl;
                c++;
            }
        }
    }
    cout<<c<<endl;
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
