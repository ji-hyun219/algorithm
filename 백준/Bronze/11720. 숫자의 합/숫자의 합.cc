#include <iostream>
#include <string>
using namespace std;

 int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	string s;
	cin >> n;
	cin >> s;
	int sum = 0;
	for(int i=0; i<n; i++){ 
	    sum += (s[i] - '0');
	}
	cout << sum;
	return 0;
}

// char c = '1';
// int n = c - 48;
// n = 1
