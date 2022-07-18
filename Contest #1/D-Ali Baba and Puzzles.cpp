#include <bits/stdc++.h>
using namespace std;
int main(){
long long n1,n2,n3,myRes;
cin>>n1>>n2>>n3>>myRes;
long long res1 = (n1 * n2) + n3;
long long res2 = n1 + (n2 * n3);
long long res3 = (n1 * n2) - n3;
long long res4 = n1 - (n2 * n3);
long long res5 = n1 + n2 - n3;
long long res6 = n1 - n2 + n3;

if(res1 == myRes || res2 == myRes || res3 == myRes || res4 == myRes || res5 == myRes || res6 == myRes){
cout<<"YES"<<endl;
}	else{
	cout<<"NO"<<endl;
}
}
