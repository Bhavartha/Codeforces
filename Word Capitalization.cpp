#include <bits/stdc++.h>
using namespace std;

int main() {
  string ip;
  cin>>ip;
  cout<<char(toupper(ip[0]));
  for(int i=1;i<ip.length();i++)
    cout<<ip[i];
}
