#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 최대 공약수를 계산하는 함수
int gcd(int a, int b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    // 입출력 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> trees(n);
    for (int i = 0; i < n; i++) {
        cin >> trees[i];
    }

    // 각 가로수 사이의 간격을 계산
    vector<int> distances(n - 1);
    for (int i = 0; i < n - 1; i++) {
        distances[i] = trees[i + 1] - trees[i];
    }

    // 모든 간격들의 최대 공약수 계산
    int interval_gcd = distances[0];
    for (int i = 1; i < n - 1; i++) {
        interval_gcd = gcd(interval_gcd, distances[i]);
    }

    // 추가해야 하는 가로수의 수 계산
    int additional_trees = 0;
    for (int i = 0; i < n - 1; i++) {
        additional_trees += (distances[i] / interval_gcd) - 1;
    }

    cout << additional_trees << '\n';

    return 0;
}
