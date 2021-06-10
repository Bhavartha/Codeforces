#include "bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define int long long
#define all(x) (x).begin(), (x).end()

const int M = 1e9 + 7;

void solve() {
    int N,L,R;
    cin>>N>>L>>R;
    vector<int> v(N);
    for(int i=0;i<N;i++) cin>>v[i];
    sort(all(v));
    int ans=0;
    for(int i=0;i<N;i++){
        int a = upper_bound(v.begin()+i+1,v.end(),L-v[i]-1) - (v.begin()+i);
        int b = upper_bound(v.begin()+i+1,v.end(),R-v[i]) - (v.begin()+i);
        ans+= b-a;
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
        solve();
}
