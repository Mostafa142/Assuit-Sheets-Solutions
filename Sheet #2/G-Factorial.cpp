#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
long long fac = 1;	
while(n--){
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		fac *= i;
	}
	cout<<fac<<endl;
	fac=1;
}
}
