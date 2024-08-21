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

    int n, m;
    cin >> n >> m;

    for(int i = n; i <= m; i++){
        if(isPrime(i)){
            cout << i << "\n";
        }
    }
    
    return 0;
}
