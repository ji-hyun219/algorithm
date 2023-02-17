#include <iostream>
#include <algorithm>
using namespace std;

 int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	int maxNum = -1;
	double avg = 0;
	cin >> n;
	double a[n];
	for(int i=0; i<n; i++){
	    cin >> a[i];
	    if (a[i] > maxNum) maxNum = a[i];
	 }
     
	for(int j=0; j<n; j++){
	    a[j] = a[j]/maxNum*100;  
	 }
	 
	for (double v : a) {
	    avg += v;
	}
	
	cout << avg/n;
	 	
	return 0;
}