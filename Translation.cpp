#include <bits/stdc++.h>
using namespace std;
int main() {
  string a,b;
  cin>>a>>b;
  reverse(a.begin(),a.end());
  if(b==a) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
