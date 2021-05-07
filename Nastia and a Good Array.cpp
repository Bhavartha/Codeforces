#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
#define M 1e9 + 7

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int mni = min_element(v.begin(),v.end()) - v.begin();
    int mn = v[mni];
    if(mni==0) cout<<n-1<<endl;
    else cout<<n<<endl;
    for(int i=0;i<n;i++){
        if(mni==i) continue;
        cout<<i+1<<" "<<mni+1<<" "<<mn+i<<" "<<mn<<endl;
        mni=0;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}

