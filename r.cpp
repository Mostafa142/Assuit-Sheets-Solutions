#include <bits/stdc++.h>
using namespace std;
int main(){

int num,year=0,month=0,day=0;
cin>>num;
year=num/365;
month=(num%365)/30;
day=(num%365)%30;
cout<<year<<" years"<<endl;
cout<<month<<" months"<<endl;
cout<<day<<" days"<<endl;
}
