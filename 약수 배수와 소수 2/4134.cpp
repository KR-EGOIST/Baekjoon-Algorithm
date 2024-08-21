#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long num){
    if(num < 2){
        return false;
    }

    for(int i = 2; i <= floor(sqrt(num)); i++){
        if(num % i == 0){
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
    cin >> n;
    
    long long num;
    for (int i = 0; i < n; i++) {
        cin >> num;

        while(!isPrime(num)){
            num++;
        }
        cout << num << "\n";
    }
    
    return 0;
}

//------------------------------------------------------

#include <iostream>
#include <cmath>

using namespace std;

// 소수 판정 함수 (더 효율적인 방식)
bool isPrime(long long num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    // 6k ± 1 규칙을 사용하여 소수 판정
    for (long long i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    // n보다 크거나 같은 첫 번째 소수 찾기
    while (!isPrime(n)) {
        n++;
    }
    
    cout << n << "\n";
    
    return 0;
}
