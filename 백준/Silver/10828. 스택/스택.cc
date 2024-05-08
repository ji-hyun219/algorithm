#include <iostream>
#include <string>
#include <stack>
#define FASTIO cin.tie(nullptr); cout.tie(0); ios::sync_with_stdio(false);
using namespace std;

int main() {
    FASTIO
    
    int n;
    cin >> n;
    
    string cmd;
    int i;
    stack<int> stack;
    
    while (n--) {
        cin >> cmd;
        
        if (cmd == "push") {
            cin >> i;
            stack.push(i);
        } else if (cmd == "top") {
            if (stack.empty()) cout << -1 << "\n";
            else cout << stack.top() << "\n";
        } else if (cmd == "size") {
            cout << stack.size() << "\n";
        } else if (cmd == "empty") {
            if (stack.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if (cmd == "pop") {
            if (stack.empty()) cout << -1 << "\n";
            else {
                cout << stack.top() << "\n";
                stack.pop();
            }
        }
    }
    
    return 0;
}