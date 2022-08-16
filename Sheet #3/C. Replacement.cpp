#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int ele;
		cin>>ele;
		if(ele>0){
			cout<<1<<" ";
		}else if(ele<0){
			cout<<2<<" ";
		}else{
			cout<<0<<" ";
		}
	}
}
