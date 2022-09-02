#include <bits/stdc++.h>
using namespace std;
int main(){
int row,column;	
cin>>row>>column;
int arr[row][column];
for(int i=0;i<row;i++){
	for(int k=0;k<column;k++){
		cin>>arr[i][k];
	}
}
int search;
cin>>search;
int flag=0;

for(int i=0;i<row;i++){
	for(int k=0;k<column;k++){
		if(arr[i][k]==search){
			flag=1;
			break;
		}
	}
}
if(flag==1){
	cout<<"will not take number"<<endl;
}else{
	cout<<"will take number"<<endl;
}
}
