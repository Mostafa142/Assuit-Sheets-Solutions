#include <bits/stdc++.h>
using namespace std;
int main(){
int numOfEle,flag=0;
cin>>numOfEle;
int arr[numOfEle];
for (int i=0;i<numOfEle;i++){
	cin>>arr[i];
}

for(int i=0;i<numOfEle/2;i++){
	if(arr[i] != arr[numOfEle -1 -i]){
		flag=1;
		break;
		}
}
if(flag==0){
	cout<<"YES"<<endl;
}else{
	cout<<"NO"<<endl;
}
}
