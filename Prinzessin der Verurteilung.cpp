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
    string s;
    cin>>s;
    vector<vector<int>> v(26,vector<int>(27));
    for(int i=0;i<n-1;i++){
        int a = s[i]-'a';
        int b = s[i+1]-'a';
        v[a][b]++;
        v[a][26]++;
    }
    v[s[n-1]-'a'][26]++;

    for(int i=0;i<26;i++){
        if(v[i][26]==0){
            char t = 'a'+i;
            cout<<t<<endl;
            return;
        }
    }

    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            if(v[i][j]==0){
                char t = 'a'+i;
                char u = 'a'+j;
                cout<<t<<u<<endl;
                return;
            }
        }
    }

    for(char x='a';x<='z';x++){
        for(char y='a';y<='z';y++){
            for(char z='a';z<='z';z++){
                string t;
                t+=x;
                t+=y;
                t+=z;
                if(s.find(t)==s.npos){
                    cout<<t<<endl;
                    return;
                }
            }
        }
    }

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
