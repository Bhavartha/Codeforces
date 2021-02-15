#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int p,k;
    cin>>p>>k;
    k--;
    if(p&1){
      int d=p/2;
      int r=k/d;
      cout<<((k+r)%p)+1<<endl;
    }
    else cout<<(k%p)+1<<endl;
  }
}
