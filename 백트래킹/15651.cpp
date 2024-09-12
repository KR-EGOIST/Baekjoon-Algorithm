#include <iostream>
#include <vector>

using namespace std;

// DFS 함수 정의
void dfs(int n, int m, vector<int>& sequence){
    // 기저 사례: 수열의 길이가 M에 도달한 경우
    if(sequence.size() == m){
        for(const int& num : sequence){
            cout << num << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = 1; i <= n; i++){
        sequence.push_back(i); // 수열에 숫자 추가
        dfs(n, m, sequence); // 다음 단계로 재귀 호출
        sequence.pop_back(); // 탐색 후, 숫자 제거 (백트래킹)
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;

    vector<int> sequence; // 현재 수열

    // DFS 호출
    dfs(n, m, sequence);
    
    return 0;
}
