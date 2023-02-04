#include <iostream>
using namespace std;
int main() {
  int h, m;
  cin>>h>>m;
  
  if (m-45<0) {
      h-=1;
      if (h < 0) h=23;
      m+=60;
    }
    cout << h <<" " <<m-45;
    return 0; 
}