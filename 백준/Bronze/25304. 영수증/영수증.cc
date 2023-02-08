#include <iostream>
using namespace std;

int main(){
    int total, n;
    int sum = 0;
    int a, b;
    cin >> total >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        sum += (a*b);
        }
    if (total == sum) cout << "Yes"; 
    else cout << "No";
    
        
    return 0;
}