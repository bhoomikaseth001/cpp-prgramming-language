#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2!=0){
				count++;
			}
		}
		if(count%2!=0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		count=0;
	}
	return 0;
}
