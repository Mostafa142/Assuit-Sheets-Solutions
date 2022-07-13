#include <bits/stdc++.h>
using namespace std;
int main(){

int A,B;
string S;

cin>>A>>S>>B;
if(A>B && S==">"){
	cout<<"Right"<<endl;
}else if(A==B && S=="="){
	cout<<"Right"<<endl;
}else if(A<B && S=="<"){
	cout<<"Right"<<endl;
}
else{
	cout<<"Wrong"<<endl;
}

    return 0;
}
