#include <bits/stdc++.h>
using namespace std;
int main(){
 int maxNum;
 cin>>maxNum;
 for (int num = 2; num <= maxNum; num++){
 	bool isPrime = true;
 	 for (int i=2; i <= num/2; i++)
            {
                if ( num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
    if(isPrime == true){
    	cout<<num<<" ";
	}        
 }
}
