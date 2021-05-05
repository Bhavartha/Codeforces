#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define M 1e9 + 7

bool solve()
{
    int n;
    string s;
    cin>>n>>s;
    vector<int> v(26,-1);
    for(int i=0;i<n;i++){
        int x = s[i]-'A';
        if(v[x]<0) v[x]=i;
        else if(v[x]==(i-1)) v[x]++;
        else return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        bool sus = solve();
        if(sus) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
