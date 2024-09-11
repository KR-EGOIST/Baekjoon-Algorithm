#include <iostream>
#include <vector>

using namespace std;

// DFS 함수 정의
void dfs(int n, int m, vector<int>& sequence, vector<bool>& used){
    // 기저 사례: 수열의 길이가 M에 도달한 경우
    if(sequence.size() == m){
        for(const int& num : sequence){
            cout << num << " ";
        }
        cout << "\n";
        return;
    }

    // 1부터 N까지의 숫자를 시도
    for(int i = 1; i <= n; i++){
        if(!used[i]){ // 숫자가 사용되지 않았으면
            sequence.push_back(i); // 수열에 숫자 추가
            used[i] = true; // 숫자 사용 표시

            dfs(n, m, sequence, used); // 다음 단계로 재귀 호출

            // 탐색 후, 숫자 제거 및 사용 표시 해제 (백트래킹)
            sequence.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> sequence; // 현재 수열
    vector<bool> used(n + 1, false); // 숫자 사용 여부 (1부터 N까지)

    // DFS 호출
    dfs(n, m, sequence, used);
    
    return 0;
}
