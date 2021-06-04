#include "bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define int long long
#define all(x) (x).begin(), (x).end()

const int M = 1e9 + 7;

int solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) cin>>v[i].F;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(j!=i && __gcd(v[i].F,2*v[j].F)>1)
                v[i].S++;

    sort(all(v),[](pair<int,int> p1,pair<int,int> p2){
        return p1.S > p2.S;
    });

    int ans=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(__gcd(v[i].F,2*v[j].F)>1)
                ans++;
    return ans;
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
