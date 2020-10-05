#include <iostream>
using namespace std;
int main() {
  int a,b;
  cin>>a>>b;
  int ans=0;
  for(;a<=b;ans++,a*=3,b*=2);
  cout<<ans<<endl;
}
