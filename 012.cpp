#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		int a[3]={0};
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			a[x]++;
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<a[i];j++){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}

