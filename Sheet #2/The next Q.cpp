#include <bits/stdc++.h>
using namespace std;
int main(){
int counter;
cin>>counter;
for(int i=1 ; i<=counter ; i++){
	string num;
	cin>>num;
	int size = num.size();
	for(int z =size-1 ; z>=0 ;z--){
		cout<<num[z]<<" ";
	}
	cout<<"\n";
}
}
