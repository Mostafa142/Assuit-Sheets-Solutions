#include <bits/stdc++.h>
using namespace std;
int main(){
int numOfEle;
cin>>numOfEle;
int arr[numOfEle];
for (int i=0;i<numOfEle;i++){
	cin>>arr[i];
}
int result = 0;
for(int i=0;i<numOfEle;i++){
	int counter =0;
	if(arr[i] % 2 != 0){
		cout<<0<<endl;
		return 0;
	}
	while(arr[i]%2==0){
		counter++;
		arr[i] /= 2;
	}
	if(i==0 || counter<result){
		result=counter;
	}
}
cout<<result<<endl;
}
