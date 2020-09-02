#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1,s2;
  int a,b,ans=0;
  cin>>s1;
  cin>>s2;
  for(int i=0;i<s1.length();i++){
    a=tolower(s1[i]);
    b=tolower(s2[i]);
    if(a<b){
      ans=-1;
      break;
    }
    if(a>b){
      ans=1;
      break;
    }
  }
  cout<<ans;
}
