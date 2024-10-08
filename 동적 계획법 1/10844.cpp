#include <iostream>

using namespace std;

const int MOD = 1000000000;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    // dp 테이블 선언, 길이 101, 자리수 0~9까지 저장
    long long dp[101][10] = {0, };

    // 초기값 설정: 길이가 1인 계단 수는 1~9
    for(int i = 1; i <= 9; i++){
        dp[1][i] = 1;
    }


    // DP 테이블 채우기
    for(int len = 2; len <= n; len++){
        for(int digit = 0; digit <= 9; digit++){
            if(digit > 0){
                // 현재 자리 digit이 1 이상이라면, 이전 자리 숫자는 digit-1일 수 있습니다.
                dp[len][digit] += dp[len - 1][digit - 1];
            }
            if(digit < 9){
                // 현재 자리 digit이 8 이하라면, 이전 자리 숫자는 digit+1일 수 있습니다.
                dp[len][digit] += dp[len - 1][digit + 1];
            }
            dp[len][digit] %= MOD;
        }
    }

    long long result = 0;
    for(int i = 0; i <= 9; i++){
        result += dp[n][i];
    }
    result %= MOD;

    cout << result << "\n";
    
    return 0;
}
