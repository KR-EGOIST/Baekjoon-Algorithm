#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int result = 0;

    // 5로 나누어떨어질 때까지 3을 뺍니다.
    while (n >= 0) {
        if (n % 5 == 0) {
            result += n / 5;  // 5kg 봉지의 개수 추가
            cout << result << "\n";
            return 0;
        }
        n -= 3;  // 3kg 봉지 하나 사용
        result++; // 봉지 개수 증가
    }

    cout << -1 << "\n";  // 정확한 무게를 만들 수 없는 경우
    return 0;
}

-----------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    // 동적 계획법을 위한 배열 초기화
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;  // 0kg을 만드는 데 필요한 봉지 수는 0

    for (int i = 1; i <= n; ++i) {
        if (i >= 3 && dp[i - 3] != INT_MAX) {
            dp[i] = min(dp[i], dp[i - 3] + 1);
        }
        if (i >= 5 && dp[i - 5] != INT_MAX) {
            dp[i] = min(dp[i], dp[i - 5] + 1);
        }
    }

    // 결과 출력
    if (dp[n] == INT_MAX) {
        cout << -1 << "\n";
    } else {
        cout << dp[n] << "\n";
    }

    return 0;
}
