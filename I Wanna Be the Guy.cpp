#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<bool> b(n,false);
  cin>>n;
  for(int i=0;i<n;i++){
    int _;
    cin>>_;
    b[_-1]=true;
  }
  cin>>n;
  for(int i=0;i<n;i++){
    int _;
    cin>>_;
    b[_-1]=true;
  }
  bool ans=true;
  for(auto _:b)
    ans&=_;
  if(ans) cout<<"I become the guy.";
  else cout<<"Oh, my keyboard!";
}
