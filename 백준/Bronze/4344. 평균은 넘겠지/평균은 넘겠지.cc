#include <iostream>
#include <algorithm>
using namespace std;

 int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int c;
	cin >> c;
	for(int i=0; i<c; i++){
	    int n;
	    cin >> n;
	    int* arr = new int[n];
	    int avg = 0;
	    for(int j=0; j<n; j++){
	        cin >> arr[j];
	        avg += arr[j];
	    }
	    avg /= n;
	    int cnt = 0;
	    for(int v=0; v<n; v++){
	     if (arr[v] > avg) cnt++;
	    }
	   // cout << double(cnt)/double(n) * double(100) << "%" << "\n";
	    printf("%.3f%%\n",double(cnt)/double(n) * double(100));
	    
	    delete[] arr;
	 }
	 
	 
	
	return 0;
}