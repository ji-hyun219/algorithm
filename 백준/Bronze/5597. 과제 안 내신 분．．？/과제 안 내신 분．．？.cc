#include <iostream>
#include <algorithm>
using namespace std;


 int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int a[31];
	int inputValue;
	for(int i=1; i<=28; i++){
	    cin >> inputValue;
	    a[inputValue] = 1;
	}
	for(int j=1; j<=30; j++){
	    if (a[j] != 1) cout << j << "\n";
	}
	
	return 0;
}