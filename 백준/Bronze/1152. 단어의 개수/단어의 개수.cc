#include <iostream>
#include <string>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); 
  string s;
  getline(cin, s);      // 공백 포함해서 입력 받는 방법
    
  if (s.empty()) {
      cout << 0;
      return 0;
  }

  int cnt = 0;
  bool isEmpty = true;
  for(int i=0; i<s.length(); i++){
     if(s[i] == ' ') { // 공백일 경우
        isEmpty = true;
     } 
     if(isEmpty && s[i] != ' ') {
         cnt++;
         isEmpty = false;
     }
  }
  cout << cnt;
// 공백이 나왔을 경우 true 
// 공백이 안나왔을 경우 false
// true 였고 단어가 나오면 +1 을 한다 

  return 0;
}