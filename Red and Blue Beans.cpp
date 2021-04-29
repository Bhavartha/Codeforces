#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define M 1e9 + 7

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        ll a,b,c,mn,mx;
        cin>>a>>b>>c;
        mn = min(a,b);
        mx = max(a,b);
        if(mn*(c+1)>=mx) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
