#include <bits/stdc++.h>
using namespace std;
int main(){
long long num1,num2;
cin>>num1>>num2;
int result = min(num1, num2);
  while (result > 0) {
     if (num1 % result == 0 && num2 % result == 0) {
            break;
        }
        result--;
    }
    cout<<result; 
}
