#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> A(n); // 자료구조의 타입(0: 큐, 1: 스택)
    deque<int> dq;    // 공통 자료구조로 사용할 deque
    
    // 자료구조 타입 입력 받기
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // 초기 원소들 입력 받기
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;

        // 자료구조의 타입이 큐일 경우만 덱에 추가
        if (A[i] == 0) {
            dq.push_back(b);
        }
    }

    int m;
    cin >> m;

    // 삽입할 수열 처리
    while (m--) {
        int x;
        cin >> x;
        
        // x를 덱의 앞에 삽입 (스택의 맨 위나 큐의 맨 앞에 넣기 위함)
        dq.push_front(x);
        
        // 맨 뒤의 값을 출력 (큐일 경우 FIFO, 스택일 경우 LIFO의 결과가 나옴)
        cout << dq.back() << " ";
        
        // 맨 뒤의 값을 제거
        dq.pop_back();
    }

    return 0;
}
​
