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

    vector<int> stairs(n + 1, 0); // 계단의 점수 배열
    vector<int> dp(n + 1, 0); // dp 배열

    // 계단 점수 입력 받기
    for(int i = 1; i <= n; i++){
        cin >> stairs[i];
    }

    // 초기 조건
    dp[1] = stairs[1];
    if(n >= 2){
        dp[2] = stairs[1] + stairs[2];
    }

    for(int i = 3; i <= n; i++){
        // i번째 계단까지의 최대 점수 계산
        dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i - 1] + stairs[i]);
    }

    // 마지막 계단을 밟았을 때의 최대 점수 출력
    cout << dp[n] << "\n";
    
    return 0;
}
