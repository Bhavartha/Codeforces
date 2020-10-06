#include <bits/stdc++.h>
using namespace std;
int main() {
  int a=0,d=0;
  int n;
  cin>>n;
  string x;
  cin>>x;
  for(auto _:x){
    if(_=='A') a++;
    else d++;
  }
  if(a==d) cout<<"Friendship";
  else if(a>d) cout<<"Anton";
  else cout<<"Danik";
  cout<<endl;
}
