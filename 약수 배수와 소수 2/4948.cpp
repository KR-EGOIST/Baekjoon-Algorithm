#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int isPrime(int n){
    if(n < 2) {
        return false;
    }

    for (int i = 2; i <= floor(sqrt(n)); i++) {
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    while(true){
        int count = 0;
        cin >> n;

        if(n == 0){
            break;
        }

        for(int i = n + 1; i <= 2 * n; i++){
            if(isPrime(i)){
                count++;
            }
        }
        cout << count << "\n";
    }
    
    return 0;
}

// ------------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

// 에라토스테네스의 체로 소수를 미리 구함
vector<bool> sieve(int max_num) {
    vector<bool> is_prime(max_num + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= max_num; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_num; j += i) {
                is_prime[j] = false;
            }
        }
    }

    return is_prime;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    const int MAX_N = 123456 * 2; // 문제의 n의 최대값이 123456이므로 2n 범위까지 고려

    // 소수 여부를 미리 구해둠
    vector<bool> is_prime = sieve(MAX_N);

    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        int count = 0;
        // n보다 크고 2n보다 작거나 같은 소수의 개수 세기
        for (int i = n + 1; i <= 2 * n; ++i) {
            if (is_prime[i]) {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
