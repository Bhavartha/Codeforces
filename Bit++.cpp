#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,ans=0;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    if(s[0]=='+' || s[1]=='+') ans++;
    else ans--;
  }
  cout<<ans;
}
