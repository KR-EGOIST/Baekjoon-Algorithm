#include <iostream>

using namespace std;

long long factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << factorial(n) << "\n";
    
    return 0;
}
