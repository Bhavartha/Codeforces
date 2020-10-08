#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  cout<<"I hate ";
  for(int i=1;i<t;i++){
    cout<<"that I ";
    if(i&1) cout<<"love ";
    else cout<<"hate ";
  }
  cout<<"it"<<endl;
}
