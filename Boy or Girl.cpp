#include <bits/stdc++.h>
using namespace std;

int main() {
  string ip;
  cin>>ip;
  int ul=0;
  bool arr[26]{0};
  for(auto i:ip)
    arr[i-'a']=true;
  for(auto a:arr)
    ul+=a;
  if(ul&1) cout<<"IGNORE HIM!";
  else cout<<"CHAT WITH HER!";
}
