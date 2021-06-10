#include "bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define int long long
#define all(x) (x).begin(), (x).end()

const int M = 1e9 + 7;

pair<int,int> sr(pair<int,int> p){
    int g = __gcd(p.F,p.S);
    return {p.F/g,p.S/g};
}

void solve() {
    int n;
    cin>>n;
    map<pair<int,int>,int> m;
    string s;
    cin>>s;
    int cd=0,ck=0;
    for(int i=0;i<n;i++){
        if(s[i]=='D') cd++;
        else ck++;
        pair<int,int> r = sr({cd,ck});
        m[r]++;
        cout<<m[r]<<" ";
    }
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
