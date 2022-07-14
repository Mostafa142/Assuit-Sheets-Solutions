#include <bits/stdc++.h>
using namespace std;
int main(){

int a,b,res,realRes=0;
char s1,s2;

cin>>a>>s1>>b>>s2>>res;

switch(s1){
	case '+':
		realRes = a+b;
		if(realRes == res){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<realRes<<endl;
		}
		break;
	case '-':
		realRes = a-b;
		if(realRes == res){
			cout<<"Yes"<<endl;
		}else{
			cout<<realRes<<endl;
		}
		break;
	case '*':
		realRes = a*b;
		if(realRes == res){
			cout<<"Yes"<<endl;
		}else{
			cout<<realRes<<endl;
		}
		break;
		
			
}


}
