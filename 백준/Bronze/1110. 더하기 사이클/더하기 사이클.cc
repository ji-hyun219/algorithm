#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
	cin.tie(NULL);
    int n, a, b;
    int c;
    int cnt = 0;
    cin >> n;
    c = n;
    while(true){
    a = n % 10;
    b = a + n / 10;
    if(b >= 10) b %= 10;
    n = 10*a + b;
    cnt++;
    if (n == c) break;
    }
    cout << cnt;
    
    return 0;
    
}