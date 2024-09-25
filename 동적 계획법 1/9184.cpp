#include <iostream>

using namespace std;

// 메모이제이션을 위한 3차원 배열
int dp[21][21][21];

// 재귀 함수 w 정의
int w(int a, int b, int c){
    // a, b, c 중 하나라도 0 이하이면 1 반환
    if(a <= 0 || b <= 0 || c <= 0){
        return 1;
    }

    // a, b, c 중 하나라도 20보다 크면 w(20, 20, 20) 반환
    if(a > 20 || b > 20 || c > 20){
        return w(20, 20, 20);
    }

    // 이미 계산한 값이 있으면 그 값을 반환 (메모이제이션)
    if(dp[a][b][c] != 0){
        return dp[a][b][c];
    }

    // a < b < c 인 경우의 재귀
    if(a < b && b < c){
        dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    } 
    // 그 외의 경우의 재귀
    else {
        dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    }

    // 계산된 값을 반환
    return dp[a][b][c];
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b, c;
    
    while(true){
        cin >> a >> b >> c;

        if(a == -1 && b == -1 && c == -1){
            break;
        }

        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
    }
    
    return 0;
}
