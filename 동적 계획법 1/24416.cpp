#include <iostream>
#include <vector>

using namespace std;

int code1Count = 0;
int code2Count = 0;
vector<int> f;

// fib 함수의 재귀 호출에 따른 코드1 카운트
int fib(int n){
    if(n == 1 || n == 2) {
        code1Count++;
        return 1;
    }
    else return fib(n - 1) + fib(n - 2);
}

// fibonacci 함수에서 코드2 카운트를 관리
void fibonacci(int n){
    f[1] = f[2] = 1;

    for(int i = 3; i <= n; ++i){
        code2Count++;
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    f.resize(n + 1);

    fib(n);
    fibonacci(n);

    cout << code1Count << " " << code2Count << "\n";
    
    return 0;
}
