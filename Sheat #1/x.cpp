#include <bits/stdc++.h>
using namespace std;
int main(){

int a,b,c,d;

cin>>a>>b>>c>>d;


if(c>b || a > d){
	cout<<-1<<endl;
}else{
	cout<<max(a,c)<<" "<<min(b,d)<<endl;
}


}
