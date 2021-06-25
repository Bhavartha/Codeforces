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
    vector<int> v(n),f;
    for(int i=0;i<n;i++) cin>>v[i];
    sort(all(v));
    int minabs = INT_MAX;
    int ind=-1;
    for(int i=1;i<n;i++){
        int t = v[i]-v[i-1];
        if(t<minabs){
            minabs = t;
            ind = i-1;
        }
    }
    // cout<<ind;
    f.push_back(v[ind]);
    for(int i=ind+2;i<n;i++)
        f.push_back(v[i]);
    for(int i=0;i<ind;i++)
        f.push_back(v[i]);
    f.push_back(v[ind+1]);
    for(auto e:f) cout<<e<<" ";
    cout<<"\n";
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
