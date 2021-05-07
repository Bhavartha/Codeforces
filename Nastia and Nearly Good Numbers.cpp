#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
#define M 1e9 + 7

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int a,b;
        cin>>a>>b;
        int n1,n2,n3;
        if(b==1) cout<<"NO"<<endl;
        else{
            n1 = a*(b-1);
            n2 = a*b;
            n3 = n1+n2;
            cout<<"YES"<<endl;
            cout<<n1<<" "<<n2<<" "<<n3<<" "<<endl;
        }
    }
}
