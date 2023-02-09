#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
	cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if (j > i) cout << " ";
            else cout << "*";
            }
            cout << "\n";
        }
        return 0;
}