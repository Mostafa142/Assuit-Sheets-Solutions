#include <bits/stdc++.h>
using namespace std;
int main(){
long long x,y,z;
cin>>x>>y>>z;
if(x>=y&&x>=z){
	if(y>z){
		cout<<z<<" "<<x<<endl;
	}else{
		cout<<y<<" "<<x<<endl;
	}
}
 
else if(y>=x&&y>=z){
	if(x>z){
		cout<<z<<" "<<y<<endl;
	}else{
		cout<<x<<" "<<y<<endl;
	}
}
 
else if(z>=x&&z>=y){
	if(x>y){
		cout<<y<<" "<<z<<endl;
	}else{
		cout<<x<<" "<<z<<endl;
 
	}
}
}
