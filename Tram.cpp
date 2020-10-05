#include <iostream>
using namespace std;
int main() {
  int t;
  cin>>t;
  int ans=0;
  int curr=0;
  while(t--){
    int a,b;
    cin>>a>>b;
    curr = curr - a + b;
    ans=max(ans,curr);
  }
  cout<<ans<<endl;
}
