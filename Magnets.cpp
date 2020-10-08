#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  string prev="00";
  int ans=0;
  while(t--){
    string t;
    cin>>t;
    if(t!=prev) ans++;
    prev=t;
  }
  cout<<ans<<endl;
}
