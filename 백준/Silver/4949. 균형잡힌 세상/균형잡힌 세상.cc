#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    while (1) {
        stack<char> stack;
        string cmd;
        bool result = true;
        getline(cin, cmd);
        
        if (cmd.length() == 1 && cmd[0] == '.') {
            break;
        }
        
        for(int i=0; i<cmd.length(); i++) {
            char c = cmd[i];
            
            if (c == '(' || c == '[') stack.push(c);
            else if (c == ')' || c == ']') {
                if (stack.empty()) { // 런타임 오류 방지
                   result = false;
                   break;
                }
                if (c == ')' && stack.top() == '(' || c == ']' && stack.top() == '[') stack.pop(); 
                else {
                    result = false;
                    break;
                }
            }
            
        }
        
        if (stack.empty() && result) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
    
    return 0;
}