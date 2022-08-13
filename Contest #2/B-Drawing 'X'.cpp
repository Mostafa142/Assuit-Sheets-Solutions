#include <bits/stdc++.h>
using namespace std;
int main(){
int i, j;
    int n;
     
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
 
        for (int j = 1; j <= n; j++)
        {
            if (j == i && j==n/2 +1 ){
            	cout << "X";
			}   
            else if (j == i)
                cout << "\\";
            else if (j == (n + 1 - i))
                cout << "/";
            else    
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}	
