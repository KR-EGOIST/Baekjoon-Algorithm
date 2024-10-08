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

    vector<int> wine(n + 1, 0); // 포도주의 양을 저장할 배열
    vector<int> dp(n + 1, 0); // dp 테이블 선언
    
    for(int i = 1; i <= n; i++){
        cin >> wine[i];
    }

    // 초기값 설정
    dp[1] = wine[1]; // 첫 번째 잔은 마실 수 있는 유일한 선택지
    if(n > 1){
        dp[2] = wine[1] + wine[2]; // 두 번째 잔까지 마신 경우
    }

    // DP 테이블 채우기
    for(int i = 3; i <= n; i++){
        dp[i] = max({dp[i - 1], // 현재 잔을 마시지 않는 경우
                    dp[i - 2] + wine[i], // 이전 잔을 마시지 않고 현재 잔을 마시는 경우
                    dp[i - 3] + wine[i - 1] + wine[i]}); // 현재 잔과 이전 잔을 마시는 경우
    }

    cout << dp[n] << "\n";
    
    return 0;
}
