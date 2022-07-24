#include <bits/stdc++.h>
using namespace std;
int main(){
 int n, i, m=0, flag=0;  
  cin >> n;  
  m=n/2;  
  if(n>1){
  	for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"NO"<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "YES"<<endl;  
  }
  else{
  	    cout<<"NO"<<endl;  

  }
}
