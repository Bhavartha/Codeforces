#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define M 1e9 + 7

void solve()
{
    int n;
    cin>>n;
    if(n==2){
        cout<<-1<<endl;
        return;
    }

    int x=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<x<<" ";
            x+=2;
            if(x>n*n) x=2;
        }
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
