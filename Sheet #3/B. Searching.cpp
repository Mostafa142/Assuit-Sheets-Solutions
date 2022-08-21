#include <bits/stdc++.h>
using namespace std;
int main(){
int numOfEle;
cin>>numOfEle;
int flag =0;
int arr[numOfEle];
for (int i=0;i<numOfEle;i++){
	cin>>arr[i];
}
int search;
cin>>search;
for(int i=0;i<numOfEle;i++){
	if(arr[i]==search){
		cout<<i<<endl;
		flag=1;
		break;
	}
}
if(flag == 0){
	cout<<-1<<endl;
}
}
