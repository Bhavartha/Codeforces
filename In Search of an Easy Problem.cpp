#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  bool hard=false;
  while(t--){
    bool i;
    cin>>i;
    hard|=i;
  }
  if(hard) cout<<"HARD";
  else cout<<"EASY";
}
