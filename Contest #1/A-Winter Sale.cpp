#include <bits/stdc++.h>
using namespace std;
int main(){
	double discount=0 , price=0;
	cin>>discount>>price;
	cout<<(discount * (price / (100-discount) ) ) + price<<endl;
}	
