#include <bits/stdc++.h>
using namespace std;
int main(){
char op;
int num1, num2;
cin >> num1>>op>>num2;
switch(op) {

    case '+':
      cout << num1 + num2;
      break;

    case '-':
      cout << num1 - num2;
      break;

    case '*':
      cout  << num1 * num2;
      break;

    case '/':
      cout  << floor(num1 / num2);
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }
  return 0;

}
