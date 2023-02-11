#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, t, answer;
    int v=0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
      cin >> t;
      arr[i] = t;
        }
    cin >> answer;
    for(int j=0; j<n; j++){
      if (answer == arr[j]) v++; 
        }
        cout << v;
        return 0;
    
}