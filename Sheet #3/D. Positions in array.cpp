#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int ele;
		cin>>ele;
		if(ele<=10)
		{
			cout<<"A["<<i-1<<"] = "<<ele<<endl;
		}
	}
}
