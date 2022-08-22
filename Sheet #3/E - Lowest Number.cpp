#include <bits/stdc++.h>
using namespace std;
int main(){
int numOfEle;
cin>>numOfEle;
int arr[numOfEle];
for (int i=0;i<numOfEle;i++){
	cin>>arr[i];
}
int num = arr[0];
int pos = 1;
for(int i=1;i<numOfEle;i++){
	if(arr[i]<num){
		num=arr[i];
		pos = i+1;
	}
}
cout<<num<<" "<<pos<<endl;
}
