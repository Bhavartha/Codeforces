#include "bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define int long long
#define all(x) (x).begin(), (x).end()
const int M = 1e9 + 7;

bool valid(string &a,string &b,int s,int n){
    bool x = true;
    for(int i=s;i<n;i++)
        if(a[i]==b[i])
            x=false;

    if(x) return true;

    for(int i=s;i<n;i++)
        if(a[i]!=b[i])
            return false;

    return true;
}

string solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    if(count(all(a),'0')!=count(all(b),'0'))
        return "NO";
    
    vector<int> p1(n+1),p2(n+1);
    for(int i=1;i<=n;i++){
        p1[i]+= p1[i-1]+ (a[i-1]-'0');
        p2[i]+= p2[i-1]+ (b[i-1]-'0');
    }

    int ind=0;
    for(int i=2;i<=n;i+=2){
        if(p1[i]==p2[i] && p1[i]==i/2){
            if(!valid(a,b,ind,i))
                return "NO";
            ind=i;
        }
    }

    for(;ind<n;ind++)
        if(a[ind]!=b[ind])
            return "NO";

    return "YES";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        cout << solve() << endl;
    }
}
