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
        long long n,q;
        cin>>n>>q;
        vector<int> vi(n);
        for(int i=0;i<n;i++)
            cin>>vi[i];
        sort(vi.begin(),vi.end());
        long long s=0;
        for(int i=0;i<n;i++){
            if(s+vi[i] == q)
                swap(vi[i],vi[n-1]);
            s+=vi[i];
        }
        if(s==q) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(auto v:vi)
                cout<<v<<" ";
            cout<<endl;
        }
    }
}
