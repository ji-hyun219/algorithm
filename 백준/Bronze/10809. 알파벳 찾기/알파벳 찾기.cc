#include <iostream>
#include <string>
using namespace std;

 int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int arr[26];
	fill_n(arr, 26, -1); // -1 로 초기화
	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++){
	    int z = s[i] - 'a'; // 자리: a 이면 z 는 0 이다
	    arr[z] = s.find(s[i]); 
	}
	
	for (int v : arr) cout << v << " ";
	
	return 0;
}