#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    vector<long long> p(101); // P 배열을 1 ~ 100까지 선언

    // P(1) ~ P(3)까지의 값은 하드코딩
    p[1] = p[2] = p[3] = 1;

    // P(4)부터 P(100)까지는 점화식을 이용해 계산
    for(int i = 4; i <= 100; ++i){
        p[i] = p[i - 2] + p[i - 3];
    }

    // 각 테스트 케이스 처리
    while(T--){
        int n;
        cin >> n;

        cout << p[n] << "\n"; // P(N) 출력
    }
    
    return 0;
}
