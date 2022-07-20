#include <bits/stdc++.h>
using namespace std;
int main(){
double n,k,a,res=0;
cin>>n>>k>>a;
res = (n*k)/a;
long long checkRes = res;
double nonDecimal = res - checkRes;
if(nonDecimal > 0){
	cout<<"double"<<endl;
}else if(checkRes <= 2147483647 ){
	cout<<"int"<<endl;
}else{
	cout<<"long long"<<endl;
}
}
