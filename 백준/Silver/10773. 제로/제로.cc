#include <iostream>
#include <stack>
using namespace std;

int main() {
    int k, num; 
    int sum = 0;
    stack<int> stack;
    
    cin >> k;
    for(int i=0; i<k; i++) {
        cin >> num;
        if (num == 0) stack.pop();
        else stack.push(num);
    }
    
    while(stack.size()) {
        sum += stack.top();
        stack.pop();
    }
    
    cout << sum;
    return 0;
}