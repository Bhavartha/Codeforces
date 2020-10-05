#include <iostream>
using namespace std;

bool isLucky(long n){
  if(n==0) return false;
  while(n){
    if(n%10!=4 && n%10!=7) return false;
    n/=10;
  }
  return true;
}
int main() {
  long long n;
  cin>>n;
  long c=0;
  while(n){
    if(n%10==4 || n%10==7) c++;
    n/=10;
  }
  if(isLucky(c)) cout<<"YES";
  else cout<<"NO";
  cout<<endl;
}
