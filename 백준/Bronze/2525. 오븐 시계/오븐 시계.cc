#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  if ((b+c) >= 60){
     a += (b+c)/60;
     b = (b+c)%60;
    } else b += c;
    
    cout << (a >= 24 ? a == 24 ? 0 : a-24 : a) << " " << b;
    
    
    return 0;
}