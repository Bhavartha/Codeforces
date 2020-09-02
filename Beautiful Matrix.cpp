#include <bits/stdc++.h>
using namespace std;

int ans(int m[5][5]){
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
      if(m[i][j]==1)
        return abs(2-i)+abs(2-j);
  return 0;
}

int main() {
  int m[5][5];
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
      cin>>m[i][j];
  cout<<ans(m);
  return 0;
}
