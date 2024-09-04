#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    long long result = roundl(tgamma(n + 1));

    cout << result << "\n";
    
    return 0;
}

//--------------------------------------------

#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }

    cout << result << "\n";
    
    return 0;
}
