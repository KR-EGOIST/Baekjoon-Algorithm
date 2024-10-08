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

    vector<int> dp(n + 1);

    dp[1] = 0; // 1은 연산이 필요 없으므로 0

    for(int i = 2; i <= n; i++){
        // 1을 뺀 경우
        dp[i] = dp[i - 1] + 1;

        // 2로 나누어 떨어지는 경우
        if(i % 2 == 0){
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        // 3으로 나누어 떨어지는 경우
        if(i % 3 == 0){
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }

    cout << dp[n] << "\n";
    
    return 0;
}
