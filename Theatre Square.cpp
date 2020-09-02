#include <bits/stdc++.h>
using namespace std;

int main() {
  double a,b,c;
  cin>>a>>b>>c;
  long long w = ceil(a/c);
  long long h = ceil(b/c);
  cout<<w*h;
}
