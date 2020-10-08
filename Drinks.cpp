#include<iostream>
using namespace std;

int main(){
  double n,s=0;
  cin>>n;
  for(int i=0;i<n;i++){
    double _;
    cin>>_;
    s+=_;
  }
  cout<<s/n;
}
