#include <iostream>
#include <vector>

#define MAX 20

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> fivo(MAX);
    fivo[0] = 0;
    fivo[1] = 1;

    for(int i = 2; i <= MAX; i++){
        fivo[i] = fivo[i - 1] + fivo[i - 2];
    }
    
    cout << fivo[n] << "\n";
    
    return 0;
}

//-------------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

vector<int> memo(21, -1); // n의 최대값은 20이므로

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (memo[n] != -1) return memo[n];
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << fibonacci(n) << "\n";
    
    return 0;
}
