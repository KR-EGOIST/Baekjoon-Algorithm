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

    vector<vector<int>> cost(n, vector<int>(3));
    vector<vector<int>> dp(n, vector<int>(3));

    // 비용 입력받기
    for(int i = 0; i < n; ++i){
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }

    // 첫 번째 집의 비용은 그대로 초기화
    dp[0][0] = cost[0][0]; // 빨강으로 칠한 경우
    dp[0][1] = cost[0][1]; // 초록으로 칠한 경우
    dp[0][2] = cost[0][2]; // 파랑으로 칠한 경우

    // DP 계산
    for(int i = 1; i < n; ++i){
        dp[i][0] = cost[i][0] + min(dp[i - 1][1], dp[i - 1][2]); // 빨강으로 칠할 때
        dp[i][1] = cost[i][1] + min(dp[i - 1][0], dp[i - 1][2]); // 초록으로 칠할 때
        dp[i][2] = cost[i][2] + min(dp[i - 1][0], dp[i - 1][1]); // 파랑으로 칠할 때
    }

    // 마지막 집의 세 가지 색 중 최소 비용 선택
    int result = min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
    cout << result << "\n";
    
    return 0;
}
​
