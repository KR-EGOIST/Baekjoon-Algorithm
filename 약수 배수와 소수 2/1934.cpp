#include <iostream>
#include <algorithm>

using namespace std;

// 최대공약수 구하기 (유클리드 호제법)
int gcd(int a, int b){
    while(b != 0){
        a %= b;
        swap(a, b); // a와 b를 swap하여 갱신
    }
    return a;
}

// 최소공배수 구하기
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    int a, b;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << lcm(a, b) << "\n";
    }
    
    return 0;
}
