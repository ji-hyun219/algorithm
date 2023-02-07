#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b, t;
    cin >> t;
    vector<int> v(t); 
    for(int i=0; i<t; i++){
        cin >> a >> b;
        v[i] = a+b;
        }
     for(int j=0; j<t; j++){
        cout << v[j] << endl;
        }
        
    return 0;
}