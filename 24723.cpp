#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    int result = pow(2, n);

    cout << result << "\n";
    
    return 0;
}
