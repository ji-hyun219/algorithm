#include <iostream>
#include <vector>
#include <string>
#define Max 1000001
#define FASTIO cin.tie(nullptr); cout.tie(0); ios::sync_with_stdio(false);
using namespace std;

int stationCount, fixCount;

struct Node {
    int p = 0, n = 0;
};

// 가능한 모든 역 고유 번호 배열
Node station[Max];
// 최초 입력 값을 받고, 링크드리스트 구현을 위한 vector
vector<int> first;

// insert next station
int insertNext(int from, int to) {
    int nextNum = station[from].n;
    
    if (nextNum == 0) { // 다음 역이 없음 (n = 0 인 상태)
        Node t = {from, from};
        
        station[from].n = to;
        station[from].p = to;
        
        station[to] = t;
        return from;
    }
    
    Node t = {from, nextNum};
    
    station[from].n = to;
    station[nextNum].p = to;
    
    station[to] = t;
    return nextNum;
}


// insert prev station
int insertPrev(int from, int to) {
    int prevNum = station[from].p;
    
    if (prevNum == 0) {
        // 기존 역과 새로운 역 2개 연결
        Node t = {from, from};
        
        station[from].n = to;
        station[from].p = to;
        
        station[to] = t;
        return from;
    }
    
    Node t = {prevNum, from};
    
    station[from].p = to;
    station[prevNum].n = to;
    
    station[to] = t;
    return prevNum;
}

// remove next station
int remNext(int n) {
    int nextNum = station[n].n;
    int nnextNum = station[nextNum].n;
    
    station[n].n = nnextNum;
    station[nnextNum].p = n;
    
    station[nextNum] = {};
    return nextNum;
}

// remove prev station
int remPrev(int n) {
    int prevNum = station[n].p;
    int pprevNum = station[prevNum].p;
    
    station[n].p = pprevNum;
    station[pprevNum].n = n;
    
    station[prevNum] = {};
    return prevNum;
}

int main() {
    FASTIO
        
    int n;
    cin >> stationCount >> fixCount;
    
    // 시작 역이 하나인 경우
    if (stationCount == 1) {
        cin >> n;
        Node t = {};  
        station[n] = t;   // 비어 있는 n번째 station 생성 (Node 형태)
    }
    else { // 시작 역이 2개 이상인 경우
        for (int i = 0; i < stationCount; i++) {
            cin >> n;
            Node t = {};
            first.push_back(n); // 일단 정수 n 을 first push back
            
            if (i < stationCount - 1) {
                // t에다가 이전 역 연결
                t.p = first[i - 1];
                // 이전 역의 다음 역 연결
                station[first[i - 1]].n = first[i];
                // -> 결론: 이전 역에 대해서만 서로 연결했음
            } 
            else { // last node
                t.p = first[i - 1];
                station[first[i - 1]].n = first[i];
                t.n = first[0]; // next -> first station
                // first station prev -> last station
                station[first[0]].p = first[stationCount - 1];
            }
            station[first[i]] = t; // 현재 처리 중인 역에 대한 Node 객체 t 를 station 배열에 저장하는 작업 수행
            // t 의 모든 필수 상태 (prev, next 포인터)를 설정한 다음에
            // station 배열에 객체를 저장
            // 이렇게 하면 t 의 모든 정보가 최종적인 상태로 배열에 한 번만 저장됨
        }
    }
    
    string cmd;
    int from, to, res;
    while (fixCount--) {
        cin >> cmd >> from;
        if (cmd[0] == 'B') {
            cin >> to;
            if (cmd[1] == 'N') res = insertNext(from, to);
            else res = insertPrev(from, to);
        }
        else {
            if (cmd[1] == 'N') res = remNext(from);
            else res = remPrev(from);
        }
        
        cout << res << '\n';
    }
    
    return 0;
}