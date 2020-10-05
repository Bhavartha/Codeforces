#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin>>w;
  int lc=0,uc=0;
  for(char i:w){
    if(i==tolower(i)) lc++;
    else uc++;
  }
  if(uc>lc)
    for(char i:w)
      cout<<(char)toupper(i);
  else
    for(char i:w)
      cout<<(char)tolower(i);
  cout<<endl;
}
