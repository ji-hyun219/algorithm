#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); 
  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  
  if (a > b) cout << a;
  else cout << b;

  return 0;
}