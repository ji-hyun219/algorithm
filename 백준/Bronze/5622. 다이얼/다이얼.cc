#include <iostream>
#include <string>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); 
  string input;
  cin >> input;
  int time = 0;
  for (int i=0; i<input.length(); i++){
      int diff = input[i] - 'A';
      if (diff <= 2) time += 3; // ABC
      else if (diff <= 5) time += 4; // DEF
      else if (diff <= 8) time += 5; // GHI
      else if (diff <= 11) time += 6; // JKL
      else if (diff <= 14) time += 7; // MNO
      else if (diff <= 18) time += 8; // PQRS
      else if (diff <= 21) time += 9; // TUV
      else time += 10; // WXYZ
  }
  
  cout << time;

  return 0;
}