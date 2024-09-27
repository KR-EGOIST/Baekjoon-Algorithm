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
    vector<int> sequence(n);
    
    for(int i = 0; i < n; i++){
        cin >> sequence[i];
    }

    int maxResult = sequence[0]; // 최대 연속 부분합
    int currentSum = sequence[0]; // 현재까지의 연속 부분합
    
    for(int i = 1; i < n; i++){
        currentSum = max(sequence[i], currentSum + sequence[i]); // 이전 부분합과 현재 값을 비교
        maxResult = max(maxResult, currentSum); // 최대값 갱신
    }

    cout << maxResult << "\n";
    
    return 0;
}
​
