#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    unordered_set<string> s;
    string name;
    int count = 0;  // 곰곰티콘 사용 횟수

    for (int i = 0; i < n; i++) {
        cin >> name;

        if (name == "ENTER") {
            s.clear();  // 새로운 세션이 시작되면 기존 유저 기록을 초기화
        } else {
            // 새로운 세션에서 처음 등장하는 유저라면 곰곰티콘 사용
            if (s.find(name) == s.end()) {
                count++;  // 곰곰티콘 사용 횟수 증가
                s.insert(name);  // 유저 기록 추가
            }
        }
    }

    cout << count << "\n";
    
    return 0;
}
