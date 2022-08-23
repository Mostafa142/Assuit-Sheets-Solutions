#include <bits/stdc++.h>
using namespace std;
int main(){
int numOfEle;
cin>>numOfEle;
int arr[numOfEle];
for (int i=0;i<numOfEle;i++){
	cin>>arr[i];
}

for(int i=numOfEle-1;i>=0;i--){
cout<<arr[i]<<" ";
}
}
