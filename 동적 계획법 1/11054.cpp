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

    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    vector<int> inc(n, 1); // 증가하는 부분 수열의 길이를 저장할 DP 배열
    vector<int> dec(n, 1); // 감소하는 부분 수열의 길이를 저장할 DP 배열

    // 증가하는 부분 수열을 위한 DP
    for(int i = 1; i < n; ++i){
        for(int j = 0; j < i; ++j){
            if(A[i] > A[j]){
                inc[i] = max(inc[i], inc[j] + 1);
            }
        }
    }

    // 감소하는 부분 수열을 위한 DP (역순 탐색)
    for(int i = n - 2; i >= 0; --i){
        for(int j = n - 1; j > i; --j){
            if(A[i] > A[j]){
                dec[i] = max(dec[i], dec[j] + 1);
            }
        }
    }

    // 가장 긴 바이토닉 부분 수열 길이 계산
    int maxLength = 0;
    for(int i = 0; i < n; ++i){
        maxLength = max(maxLength, inc[i] + dec[i] - 1);
    }

    cout << maxLength << "\n";
    
    return 0;
}
