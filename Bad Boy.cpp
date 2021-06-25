#include "bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define int long long
#define all(x) (x).begin(), (x).end()

const int M = 1e9 + 7;

int dist(pair<int, int> p1, pair<int, int> p2)
{
    return abs(p1.F - p2.F) + abs(p1.S - p2.S);
}

void solve()
{
    pair<int, int> sz, pos;
    cin >> sz.F >> sz.S >> pos.F >> pos.S;
    vector<pair<int, int>> v{{1, 1}, {sz.F, 1}, {1, sz.S}, {sz.F, sz.S}};
    pair<int, int> fc,sc;
    int mx = INT_MIN;
    for(auto e:v){
        if(dist(pos,e)>mx){
            fc = e;
            mx = dist(pos,e);
        }
    }
    mx = INT_MIN;
    for(auto e:v){
        if((dist(pos,e)+dist(e,fc))>mx){
            sc = e;
            mx = dist(pos,e)+dist(e,fc);
        }
    }

    cout<<fc.F<<" "<<fc.S<<" ";
    cout<<sc.F<<" "<<sc.S<<"\n";
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
