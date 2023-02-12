#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);	
 
  int n, x;
  cin >> n;
  int* a = new int[n];
  cin >> x;
  for(int i=0; i<n; i++){
      cin >> a[i];
   }
  for(int j=0; j<n; j++){
      if(a[j] < x) cout << a[j] << " ";
   }
    
  delete a;
  return 0;
}