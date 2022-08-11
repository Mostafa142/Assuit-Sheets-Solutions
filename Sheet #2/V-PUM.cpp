#include <bits/stdc++.h>
using namespace std;
int main(){
  
	int n, start=1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << start << " " << start+1 << " " << start+2 << " " << "PUM\n";
		start += 4;
	}
	
	return 0;
}
