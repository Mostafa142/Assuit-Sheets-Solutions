#include <bits/stdc++.h>
using namespace std;
int main(){
int size;
long long sum=0;
string number;
cin>>size;
cin>>number;
for (int i=0;i<size;i++){
	sum+=number[i]-48;
}
cout<<sum<<endl;
}
