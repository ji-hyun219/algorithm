#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }
    
    sort(arr, arr + n);
    
    for (int i=0; i<n; i++) {
        cout << arr[i] << "\n";
    } 
    
    return 0;
}