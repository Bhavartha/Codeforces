#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define int long long
#define M 1e9 + 7

int solve(){
    int n,res=0;
    cin>>n;
    for(int i=1;i<10;i++)
        for(int j=i;j<=n;j=j*10+i)
            res++;
    return res;
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
