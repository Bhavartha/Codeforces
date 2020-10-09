#include <bits/stdc++.h>
using namespace std;
int main() {
  int ans=0;
  vector<int> v(4);
  for(int i=0;i<4;i++)
    cin>>v[i];
  for(int i=0;i<4;i++){
    bool inc=false;
    for(int j=i+1;j<4;j++)
      if(v[i]==v[j])
        inc=true;
    if(inc) ans++;
  }
  cout<<ans;
}
