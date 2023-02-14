#include <iostream>
#include <algorithm>
using namespace std;


 int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int a[9], b[9];
	for (int i=0; i<9; i++){
	    cin >> a[i];
	   b[i] = a[i];
	    }
	    
	sort(a, a+9);
	int maxNum = a[8];
	cout << maxNum << "\n";
    for (int j=0; j<9; j++){
	    if (b[j] == maxNum) {
	        cout << j+1;
	        break;
	        }
	    }
	return 0;
}