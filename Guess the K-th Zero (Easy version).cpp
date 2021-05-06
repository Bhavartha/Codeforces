#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define int long long
#define M 1e9 + 7

void solve(){
    int n,t,k;
    cin>>n>>t>>k;
    int l=1,h=n;
    while(l<h){
        int m = l+(h-l)/2;
        cout<<"? "<<l<<" "<<m<<endl;
        int zc,s;
        cin>>s;
        zc = (m-l+1)-s;
        if(zc<k){
            l=m+1;
            k-=zc;
        }
        else if(s==0 && k==zc){
            l=m;
            break;
        }
        else{
            h=m;
        }
    }
    cout<<"! "<<l<<endl;
    cout.flush();
}

int32_t main()
{
    int tc = 1;
    while (tc--)
    {
        solve();
    }
}
