#include "bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define int long long
#define all(x) (x).begin(), (x).end()

const int M = 1e9 + 7;

void solve() {
    int rows,cols;
    cin>>rows>>cols;
    vector<vector<char>> v,v1,v2;
    for(int i=0;i<rows;i++){
        string s;
        cin>>s;
        v.push_back(vector<char> (all(s)));
    }
    v1=v;
    v2=v;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if((i+j)&1) v1[i][j]='R',v2[i][j]='W';
            else v1[i][j]='W', v2[i][j]='R';
        }
    }
    bool valid1 = true;
    bool valid2 = true;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(v[i][j]!='.' && v1[i][j]!=v[i][j])
                valid1 = false;
            if(v[i][j]!='.' && v2[i][j]!=v[i][j])
                valid2 = false;
        }
    }
    if(valid1){
        cout<<"YES"<<endl;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<v1[i][j];
            }
            cout<<"\n";
        }
        return;
    }
    if(valid2){
        cout<<"YES"<<endl;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<v2[i][j];
            }
            cout<<"\n";
        }
        return;
    }
    cout<<"NO"<<endl;
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
