#include <iostream>
#include <deque>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    deque<pair<int, int>> balloons;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        balloons.push_back({num, i + 1});
    }

    while (!balloons.empty()) {
        int move = balloons.front().first;  // 현재 풍선의 이동 값
        cout << balloons.front().second << " ";  // 현재 풍선의 번호 출력
        balloons.pop_front();  // 현재 풍선 제거

        if (balloons.empty()) break;  // 풍선이 다 터졌으면 루프 종료

        // 다음 이동을 처리
        if (move > 0) {
            // 오른쪽으로 이동
            for (int i = 0; i < move - 1; ++i) {
                balloons.push_back(balloons.front());
                balloons.pop_front();
            }
        } else {
            // 왼쪽으로 이동
            for (int i = 0; i < -move; ++i) {
                balloons.push_front(balloons.back());
                balloons.pop_back();
            }
        }
    }

    return 0;
}
​
