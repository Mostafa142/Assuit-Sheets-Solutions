#include <bits/stdc++.h>
using namespace std;
int main(){
long long location;
cin>>location;
long long row = location/4 , col;
if(row % 2 == 0){
	col= location % 4;
}else{
	col = 3-(location % 4);
}
cout<<row<<" "<<col<<endl;
}	
