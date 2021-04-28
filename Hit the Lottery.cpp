#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = {100,20,10,5,1};
	long long a=0,n;
	cin>>n;

	for(auto i:v){
		a+= n/i;
		n%=i;
	}
	cout<<a<<endl;
}
