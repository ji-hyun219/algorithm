#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int a = 1;
    int b = 1;
    for (int i=k; i>=1; i--) {
        a *= n;
        n--;
        b *= i;
    }
    
    cout << a/b << "\n";
    return 0;
}