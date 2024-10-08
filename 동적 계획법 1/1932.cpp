#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n; // 삼각형의 크기 입력

    vector<vector<int>> triangle(n, vector<int> (n, 0)); // 삼각형 배열
    vector<vector<int>> dp(n, vector<int> (n, 0)); // 최대 합을 저장하는 dp 배열

    // 삼각형 입력 받기
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cin >> triangle[i][j];
        }
    }

    // dp 배열 초기화: 맨 위층은 그 자체로 최대 합
    dp[0][0] = triangle[0][0];

    // dp 값 채우기: 두 번째 층부터 시작
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0){
                // 맨 왼쪽 값은 바로 위에서만 올 수 있음
                dp[i][j] = dp[i - 1][j] + triangle[i][j];
            }
            else if(i == j){
                // 맨 오른쪽 값은 왼쪽 대각선에서만 올 수 있음
                dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
            }
            else{
                // 그 외의 값은 왼쪽 대각선과 오른쪽 대각선 중 큰 값 선택
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
            }
        }
    }

    // 마지막 층의 최대 값이 정답
    int result = 0;
    for(int j = 0; j < n; j++){
        result = max(result, dp[n - 1][j]);
    }

    cout << result << "\n";
    
    return 0;
}
