#include <iostream>
using namespace std;
int main() {
  int n,h;
  cin>>n>>h;
  int e=n;
  while(n--){
    int _;
    cin>>_;
    if(_>h) e++;
  }
  cout<<e<<endl;
}
