#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, k;
    cin >> n >> k;

    long long result = roundl(tgamma(n + 1)) / roundl(tgamma(n - k + 1)) / roundl(tgamma(k + 1));

    cout << result << "\n";
    
    return 0;
}

//-----------------------------------------------

#include <iostream>

using namespace std;

long long binomial_coefficient(int n, int k) {
    // k가 n/2보다 클 경우, 대칭성을 이용하여 계산량을 줄임
    if (k > n - k) {
        k = n - k;
    }
    
    long long result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    
    return result;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, k;
    cin >> n >> k;
    
    cout << binomial_coefficient(n, k) << "\n";
    
    return 0;
}
