#include <bits/stdc++.h>
using namespace std;
int main(){
int numOfEle;
cin>>numOfEle;
int arr[numOfEle];
for (int i=0;i<numOfEle;i++){
	cin>>arr[i];
}

 for (int i = 0; i < numOfEle; i++) {
 	int min,temp;
      min = i;
      for (int j = i + 1; j < numOfEle; j++)
      if (arr[j] < arr[min])
      min = j;
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    cout<<arr[i]<<" ";

   }
}
