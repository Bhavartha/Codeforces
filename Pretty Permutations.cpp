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
    // Odd
    if(n&1){
        v[0] = 3;
        v[1] = 1;
        v[2] = 2;
        for(int i=4;i<=n;i+=2){
            v[i] = i;
            v[i-1] = i+1;
        }
    }
    //Even
    else{
        for(int i=1;i<=n;i+=2){
            v[i] = i;
            v[i-1] = i+1;
        }
    }
    for(auto e:v)
        cout<<e<<" ";
    cout<<endl;
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
