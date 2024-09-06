#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<string> dancers;
    dancers.insert("ChongChong"); // 처음에 ChongChong만 춤을 추고 있음

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;

        // 둘 중 한 명이 춤을 추고 있으면 다른 사람도 춤을 추게 됨
        if (dancers.count(a) || dancers.count(b)) {
            dancers.insert(a);
            dancers.insert(b);
        }
    }

    cout << dancers.size() << "\n"; // 춤을 추는 사람들의 수를 출력

    return 0;
}
