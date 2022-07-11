#include <bits/stdc++.h>
using namespace std;
int main(){

double p1 , p2;
cin>>p1>>p2;
if(p1==0 && p2==0){
	cout<<"Origem";
}else if(p1==0 && p2!=0){
	cout<<"Eixo Y";
}else if(p1!=0 && p2==0){
	cout<<"Eixo X";
}else if(p1>0 && p2>0){
	cout<<"Q1";
}else if(p1<0 && p2>0){
	cout<<"Q2";
}else if(p1<0 && p2<0){
	cout<<"Q3";
}else if(p1>0 && p2<0){
	cout<<"Q4";
}

}
