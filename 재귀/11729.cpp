#include <iostream>
#include <cmath>

using namespace std;

// n : 현재 옮겨야 할 원판의 수 , from : 원판이 현재 있는 장대
// by : 원판을 옮기기 위해 사용하는 보조 장대
// to : 원판을 옮길 목표 장대
void hanoi(int n, int from, int by, int to){
    if(n == 1) cout << from << " " << to << "\n";

    else{
        hanoi(n - 1, from, to, by);
        cout << from << " " << to << "\n";
        hanoi(n - 1, by, from, to);
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int k = pow(2, n) - 1;
    cout << k << "\n";
    hanoi(n, 1, 2, 3);
    
    return 0;
}
