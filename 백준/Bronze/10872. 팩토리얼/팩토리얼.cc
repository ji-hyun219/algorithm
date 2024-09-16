#include <iostream>
using namespace std;

int main() {
    int n;
    int result = 1;
    
    cin >> n;
    
    if (n == 0) result = 1;
    else {
        while (n > 0) {
            result *= n;
            n--;
        }
    }
    
    cout << result << "\n";
    return 0;
}