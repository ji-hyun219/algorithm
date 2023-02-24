#include <iostream>
#include <string>
using namespace std;

void repeat(int r, string& s){
    for(int j=0; j<s.length(); j++){
        for(int k=0; k<r; k++){
            cout << s[j];
        }
    }
    cout << "\n";
}

int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; i++){
      int r;
      string s;
      cin >> r >> s;
      repeat(r, s);
  }
  
  return 0;
}