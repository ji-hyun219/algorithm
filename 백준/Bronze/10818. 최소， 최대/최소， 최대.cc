#include <iostream>
#include <algorithm>
using namespace std;


 int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n; 
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
	    cin >> a[i];   
	 }
	int maxNum = a[0];
	int minNum = a[0];
	
	for (int j=0; j<n; j++){
	    maxNum = max(maxNum, a[j]);
	    minNum = min(minNum, a[j]);
	 }
	 
	 cout << minNum << " " << maxNum;
	 return 0;
}