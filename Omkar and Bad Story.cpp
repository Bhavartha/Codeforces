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
    int mn = *min_element(all(v));
    if(mn<0){
        cout<<"NO"<<endl;
        return;
    }
    int mx = *max_element(all(v));
    int g = 0;
    for(int i:v)
        g = __gcd(g,i);
    if((mn!=0 && mx/g > 299) || mx/g > 300){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

    int zz = mn==0?(mx/g +1):(mx/min(mn,g));
    cout<<zz<<endl;
    for(int i=min(mn,g);i<=mx;i+=g)
        cout<<i<<" ";
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
