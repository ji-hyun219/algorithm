#include <iostream>
#include <string>
using namespace std;

string Test(string& s) {
    string result;
    result += s.front();
    result += s.back();
    return result;
}

 int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin >> t;
	for (int i=0; i<t; i++){
	 string s;
	 cin >> s;
	 cout << Test(s) << "\n";   
	}
	
	return 0;
}


