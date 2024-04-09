#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    int M;
    string s = "";
    string ans = "";
    
    cin >> s; 
    list<char> li(s.begin(), s.end());
    
    auto cursor = li.end();
    cin >> M;
    
    for(int i = 0; i<M; i++) {
        char cmd, c;
        cin >> cmd;
        
        if (cmd == 'L') {
            if (cursor != li.begin()) cursor--; // 커서가 문장의 맨 앞이 아닐 때 한 칸 이동
        } else if (cmd == 'D') {
            if (cursor != li.end()) cursor++; // 커서가 문장의 맨 뒤가 아니면 오른쪽 이동
        } else if (cmd == 'B') { // 커서 왼쪽 문자 삭제
            // 문장의 맨 앞이 아니라면
            if (cursor != li.begin()) {
                cursor--;
                cursor = li.erase(cursor); // 커서 왼쪽 문자 삭제 (반환값은 커서 재할당)
            }
        } else if (cmd == 'P') {
            cin >> c;
            li.insert(cursor, c);
        }
    }
    
    for (cursor = li.begin(); cursor != li.end(); cursor++) cout << *cursor;
    
    return 0;
}