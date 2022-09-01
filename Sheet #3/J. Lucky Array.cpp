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
int counter=0;
for(int i=0;i<numOfEle;i++){
	if(min == arr[i]){
		counter++;
	}
	if(min > arr[i]){
		min = arr[i];
		counter=1;
	}
}
if(counter % 2 == 0){
	cout<<"Unlucky"<<endl;
}else{
	cout<<"Lucky"<<endl;
}
}
