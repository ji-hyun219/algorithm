#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    int L;
    cin >> L;
    
    while (L--) {
        list<char> li;
        auto cursor = li.begin();
        
        string s;
        cin >> s;
        
        for (auto c : s) {
            if (c == '-') {
                if (cursor != li.begin()) {
                    cursor = li.erase(--cursor);
                }
            }
            else if (c == '<') {
                if (cursor != li.begin()) cursor--;
            } 
            else if (c == '>') {
                if (cursor != li.end()) cursor++;
            }
            else li.insert(cursor, c);
        }
        
        for (auto a : li) cout << a;
        cout << endl;  
    }
    
    return 0;
}