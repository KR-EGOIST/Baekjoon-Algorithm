#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
    while(b != 0){
        a %= b;
        swap(a, b);
    }

    return a;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    // 두 분수의 합 구하기
    int numerator = (a * d) + (b * c);  // 분자
    int denominator = b * d;            // 분모

    // 최대공약수로 약분
    int divisor = gcd(numerator, denominator);

    cout << numerator / divisor << " " << denominator / divisor << "\n";
    
    return 0;
}
