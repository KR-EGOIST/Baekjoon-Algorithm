#include <iostream>

using namespace std;

// 조합 계산 함수: nCr = n! / (r! * (n-r)!)
long long combination(int n, int r){
    if(r > n / 2) r = n - r; // 조합의 대칭성을 이용하여 계산을 줄임

    long long result = 1;

    for(int i = 0; i < r; i++){
        result *= (n - i); // n! 이지만 (n - r + 1)까지 계산
        result /= (i + 1); // r!
    }

    return result;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int n, m;
        cin >> n >> m;
        
        cout << combination(m, n) << "\n";
    }
    
    return 0;
}
