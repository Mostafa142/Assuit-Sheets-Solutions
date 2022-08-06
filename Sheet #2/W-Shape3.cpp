#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows,i,j,k;
    cin>>rows;
    for(i=1; i<=rows; i++){   
    for(j=1; j<=rows-i; j++){
      cout<<" ";
}
for(k=1; k<=i; k++){
      cout<<"* ";
     cout<<"";
}
cout<<"\n";
}
for(i=1; i<=rows-1; i++){ 
    for(j=1; j<=i; j++){
      cout<<" ";
}
for(k=1; k<=rows-i; k++){
      cout<<"* ";
      cout<<"";
}
cout<<"\n";
        }
}
