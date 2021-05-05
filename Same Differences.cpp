#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define int long long
#define M 1e9 + 7

int solve(){
    int n,ans=0;
    cin>>n;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x-i]++;
    }
    for(auto i:m)
        ans+= i.S * (i.S-1) / 2;
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        cout<<solve()<<endl;
    }
}

