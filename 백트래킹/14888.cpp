#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> nums(n); // 수열
int operators[4]; // 연산자(덧셈, 뺄셈, 곱셈, 나눗셈)
int maxResult = -1000000000; // 최댓값
int minResult = 1000000000; // 최솟값

// 연산을 수행하는 함수
int calculate(int a, int b, int op){
    switch(op){
        case 0: return a + b; // 덧셈
        case 1: return a - b; // 뺄셈
        case 2: return a * b; // 곱셈
        case 3: return a / b; // 나눗셈
    }
    return 0;
}

// 백트래킹을 이용하여 모든 경우의 수를 탐색
void dfs(int idx, int curResult){
    // 모든 수를 다 사용했으면 결과를 갱신
    if(idx == n){
        maxResult = max(maxResult, curResult);
        minResult = min(minResult, curResult);
        return;
    }

    // 각 연산자를 사용하면서 백트래킹
    for(int i = 0; i < 4; i++){
        if(operators[i] > 0){ // 사용할 연산자가 남아있을 때
            operators[i]--; // 연산자를 사용
             // 현재까지의 결과와 nums[idx]를 이용하여 새로운 결과를 계산
            dfs(idx + 1, calculate(curResult, nums[idx], i));
            operators[i]++; // 백트래킹 후 연산자 복구
        }
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    nums.resize(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    for(int i = 0; i < 4; i++){
        cin >> operators[i];
    }

    // 백트래킹 시작 (첫 번째 숫자는 미리 curResult에 넣고 시작)
    dfs(1, nums[0]);

    cout << maxResult << "\n";
    cout << minResult << "\n";
    
    return 0;
}
