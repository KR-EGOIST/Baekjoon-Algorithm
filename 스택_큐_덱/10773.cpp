#include <iostream>
#include <stack>

using namespace std;

int main() {
    int k;
    cin >> k;

    stack<int> s;
    long long sum = 0; // 최종 합계를 저장할 변수

    int n;
    for(int i = 0; i < k; i++) {
        cin >> n;
        if(n == 0 && !s.empty()) {
            sum -= s.top(); // 마지막 값을 제거할 때 합계에서도 빼준다.
            s.pop();
        } else {
            s.push(n);
            sum += n; // 새로운 값을 추가할 때 합계에 더해준다.
        }
    }

    cout << sum << "\n"; // 결과 출력
    
    return 0;
}
