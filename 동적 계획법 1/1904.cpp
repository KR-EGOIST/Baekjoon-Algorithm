#include <iostream>
#include <vector>

using namespace std;

// DP 테이블 선언
vector<int> dp;

int solution(int n){
    dp[1] = 1; // N이 1일 때
    dp[2] = 2; // N이 2일 때

    // DP 점화식 적용 (N이 3 이상일 때)
    for(int i = 3; i <= n; ++i){
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }

    return dp[n];
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    dp.resize(n + 1, 0);

    cout << solution(n) << "\n";
    
    return 0;
}
