#include <iostream>
#include <queue>
using namespace std;
#define FASTIO cin.tie(nullptr); cout.tie(0); ios::sync_with_stdio(false);

int main() {
    FASTIO
    int n;
    queue<int> queue;
    
    cin >> n;
    for (int i=1; i<=n; i++) {
        queue.push(i); // 1 2 3 4
    }
    
    while (queue.size() > 1) {
        queue.pop(); 
        int front = queue.front(); 
        queue.push(front); 
        queue.pop();
    }
    
    cout << queue.front();
    
    return 0;
}