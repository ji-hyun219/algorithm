#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n, m;
        cin >> n >> m;
        
        int result = 1;
        for (int j=1; j<=n; j++){
            result *= m;
            result /= j;
            m--;
        }
        cout << result << "\n";
    }
    return 0;
}