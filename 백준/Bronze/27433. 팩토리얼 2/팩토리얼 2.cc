#include <iostream>
using namespace std;

long fact(long num) {
    if (num < 1) return 1;
    else return num * fact(num-1);
}

int main() {
    int n;
    cin >> n;
    
    cout << fact(n) << "\n";
    return 0;
}