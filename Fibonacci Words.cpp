#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
#define M 1e9 + 7

string solve(){
    string s;
    cin>>s;
    vector<int> v;
    for(char c:s){
        v.push_back(c-'A');
    }
    for(int i=2;i<v.size();i++){
        if(v[i] != (v[i-1]+v[i-2])%26) return "NO";
    }
    return "YES";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        cout<<solve()<<endl;
    }
}
