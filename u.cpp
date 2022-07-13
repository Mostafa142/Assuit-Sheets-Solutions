#include <bits/stdc++.h>
using namespace std;
int main(){

float num;
cin>>num;
int intNum = num;
float floNum=num-intNum;

if(floNum==0){
	cout<<"int"<<" "<<intNum<<endl;
}else{
	cout<<"float"<<" "<<intNum<<" "<<floNum<<endl;
}

    return 0;
}
