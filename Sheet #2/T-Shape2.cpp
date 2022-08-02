#include <bits/stdc++.h>
using namespace std;
int main(){
 int space, rows;
    cin >> rows;
    for(int i = 1, j = 0; i <= rows; ++i, j = 0){
        for(space = 1; space <= rows-i; ++space){
            cout <<" ";
        }

        while(j != 2*i-1){
            cout << "*";
            ++j;
        }
        
        cout << endl;
    }    
}
