#include <bits/stdc++.h>
using namespace std;
int main(){
int numOfEle;
cin>>numOfEle;
int arr[numOfEle];
for (int i=0;i<numOfEle;i++){
	cin>>arr[i];
}
int min = arr[0];
int max = arr[0];
int maxPos = 0;
int minPos = 0;
for(int i=0;i<numOfEle;i++){
	if(min>arr[i]){
		min = arr[i];
		minPos = i;
	}
	if(max < arr[i]){
		max=arr[i];
		maxPos=i;
	}
}
arr[minPos] = max;
arr[maxPos] =min;
for(int i=0;i<numOfEle;i++){
	cout<<arr[i]<<" ";
}
}
