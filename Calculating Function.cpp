#include<iostream>
using namespace std;

int main(){
  long long t;
  cin>>t;
  if(t&1) cout<<-(t/2)-1;
  else cout<<t/2;
}
