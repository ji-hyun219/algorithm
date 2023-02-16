#include <iostream>
#include <algorithm>
using namespace std;


 int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int a[10];
	int diff = 0;
	for(int i=0; i<10; i++){
	    cin >> a[i];
	    a[i] %= 42;
	 }
    for(int j=0; j<10; j++){
        bool isDiff = true;
	    for(int k=j+1; k<10; k++){
	        if(a[j] == a[k]) {
	            isDiff = false;
	            break;   
	            }
	    } 
	 if(isDiff) diff++;
	   
	 }
	 cout << diff;
	 
	
	return 0;
}