#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// 퀸을 놓을 수 있는지 여부를 확인하는 함수
bool canPlace(int row, int col, const vector<int>& queens){
    for(int i = 0; i < row; i++){
        if(queens[i] == col || abs(i - row) == abs(queens[i] - col)){
            return false; // 같은 열에 있거나 대각선에 있으면 놓을 수 없음
        }
    }
    return true;
}

// 백트래킹으로 퀸을 배치하는 함수
void dfs(int row, int n, vector<int>& queens, int& result){
    if(row == n){
        result++; // 퀸을 모두 배치한 경우 경우의 수 증가
        return;
    }

    for(int col = 0; col < n; col++){
        if(canPlace(row, col, queens)){
            queens[row] = col; // 퀸을 놓는다
            dfs(row + 1, n, queens, result); // 다음 행으로 넘어간다
        }
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> queens(n); // N x N 체스판에서 N개의 퀸을 놓기 위한 배열 크기 설정
    int result = 0; // 퀸을 놓는 경우의 수를 저장하는 변수

    dfs(0, n, queens, result); // 첫 번째 행부터 배치를 시작

    cout << result << "\n"; // 결과 출력
    
    return 0;
}
