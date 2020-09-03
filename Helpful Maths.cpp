#include <bits/stdc++.h>
using namespace std;

int main() {
  string ip;
  vector<char> v;
  cin>>ip;
  for(int i=0;i<ip.length();i+=2)
    v.push_back(ip[i]);
  sort(v.begin(),v.end());
  for(int i=0;i<v.size()-1;i++)
    cout<<v[i]<<'+';
  cout<<*v.rbegin();
}
