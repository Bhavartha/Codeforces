#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,s3;
    vector<int> a(26);
    cin>>s1>>s2>>s3;
    for(int i:s1) a[i-65]++;
    for(int i:s2) a[i-65]++;
    for(int i:s3) a[i-65]--;
    for(auto i:a){
        if(i!=0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
