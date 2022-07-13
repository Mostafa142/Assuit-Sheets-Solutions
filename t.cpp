#include <bits/stdc++.h>
using namespace std;
int main(){

long long x,y,z;
cin>>x>>y>>z;
int a[] = {x, y, z};
int b[]={x,y,z};
sort(a, a + 3);
for (int i = 0; i < 3; i++){
	    cout << a[i] <<endl;

}
cout<<endl;
for(int j=0;j<3;j++){
	cout<<b[j]<<endl;
}


    return 0;
}
