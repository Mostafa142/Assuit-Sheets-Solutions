#include <bits/stdc++.h>
using namespace std;
int main(){
int n,max=0;	
cin>>n;
for (int i=1;i<=n;i++){
	int num;
	cin>>num;
	if(i == 1){
	max=num;
		}
		if(num>max){
			max=num;
		}}
cout<<max<<endl;
}

