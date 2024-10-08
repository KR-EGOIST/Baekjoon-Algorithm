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

    vector<int> A(n + 1); // 수열 A 저장
    vector<int> dp(n + 1, 1); // dp 배열 선언

    for(int i = 1; i <= n; i++){
        cin >> A[i];
    }

    // DP로 가장 긴 증가하는 부분 수열(LIS) 계산
    for(int i = 2; i <= n; i++){ // 두 번째 원소부터 탐색
        for(int j = 1; j < i; j++){ // 현재 원소보다 이전 원소들을 비교
            if(A[i] > A[j]){ // A[i]가 A[j]보다 크다면 증가하는 수열 조건 만족
                dp[i] = max(dp[i], dp[j] + 1); // 가장 긴 수열 길이로 dp[i] 갱신
            }
        }
    }

    // dp 배열에서 최댓값 출력 (가장 긴 증가하는 부분 수열의 길이)
    int result = *max_element(dp.begin(), dp.end());
    cout << result << "\n";
    
    return 0;
}
