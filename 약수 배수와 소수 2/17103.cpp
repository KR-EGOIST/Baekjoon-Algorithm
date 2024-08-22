#include<iostream>
#include<vector>

using namespace std;

const int MAX_N = 1000000;  // N의 최대값

// 소수를 저장하는 배열
vector<bool> isPrime(MAX_N + 1, true);

// 에라토스테네스의 체로 소수를 구하는 함수 (한 번만 계산)
void sieve() {
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAX_N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

// 골드바흐 파티션의 개수를 구하는 함수
int countGoldbachPartitions(int n) {
    int count = 0;

    // p1 <= p2 이므로 p1 <= n/2만 계산하면 된다.
    for (int p1 = 2; p1 <= n / 2; ++p1) {
        int p2 = n - p1;
        if (isPrime[p1] && isPrime[p2]) {
            count++;
        }
    }

    return count;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    // 에라토스테네스의 체를 한 번만 실행
    sieve();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int result = countGoldbachPartitions(n);
        cout << result << "\n";
    }

    return 0;
}

