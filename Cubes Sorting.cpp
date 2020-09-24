#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		bool can=false;
		for(int i=1;i<n;i++)
			if(v[i]>=v[i-1]){
				can=true;
				break;
			}
		if(!can) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
	return 0;
}