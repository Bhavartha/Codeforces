#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ll long long
#define int long long
#define M 1e9 + 7

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll normal_ans = 0;
    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    for (int i = 0; i < n; i++)
        normal_ans += v1[i] * v2[i];

    ll max_ans = normal_ans;
    
    // Odd length of swap array
    for(int i=0;i<n;i++){
        int l=i-1;
        int r=i+1;
        ll cur_ans = normal_ans;
        while(l>=0 && r<n){
            cur_ans = cur_ans - (v1[l]*v2[l]) - (v1[r]*v2[r]);
            cur_ans = cur_ans + (v1[l]*v2[r]) + (v1[r]*v2[l]);
            max_ans = max(max_ans,cur_ans);
            l--;
            r++;
        }
    }
             
    // Even length of swap array
    for(int i=0;i<n;i++){
        int l=i;
        int r=i+1;
        ll cur_ans = normal_ans;
        while(l>=0 && r<n){
            cur_ans = cur_ans - (v1[l]*v2[l]) - (v1[r]*v2[r]);
            cur_ans = cur_ans + (v1[l]*v2[r]) + (v1[r]*v2[l]);
            max_ans = max(max_ans,cur_ans);
            l--;
            r++;
        }
    }
    cout<<max_ans<<endl;
}
