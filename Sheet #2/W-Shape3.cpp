#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,k,row;
    cin >> row;
   for(i=1;i<=row;i++)
   {
     for(k=1;k<=row-i;k++)
     cout<<" ";
     for(k=1;k<=2*i-1;k++)
       cout<<"*";
     cout<<endl;
   }
   for(i=row-1;i>=1;i--)
   {
     for(k=1;k<=row-i;k++)
     cout<<" ";
     for(k=1;k<=2*i-1;k++)
       cout<<"*";
     cout<<endl;
}
}
