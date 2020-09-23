#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    bool af=false;
    string s;
    cin>>s;
    int ans=0,count=0;
    for(auto i:s){
      if(i=='A'){
        af=true;
        ans=max(ans,count);
        count=0;
      }
      else if(af) count++;
    }
    ans=max(ans,count);
    cout<<ans<<endl;
  }
}
