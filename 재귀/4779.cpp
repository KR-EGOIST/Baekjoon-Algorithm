#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// level 인자는 현재 재귀 깊이를 나타내며, 이 값이 0이 될 때까지 재귀를 계속합니다.
void cantorSet(string &s, int start, int end, int level){
    if(level == 0) return;

    // end - start + 1은 현재 구간의 길이를 나타냅니다.
    int third = (end - start + 1) / 3;
    int mid1 = start + third;
    int mid2 = start + (third * 2);

    // 가운데 부분을 공백으로 설정
    for(int i = mid1; i < mid2; i++){
        s[i] = ' ';
    }

    // 왼쪽과 오른쪽 부분을 재귀적으로 처리
    cantorSet(s, start, mid1 - 1, level - 1);
    cantorSet(s, mid2, end, level - 1);
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    while(cin >> n){
        if(n < 0 || n > 12) break;

        int length = (int)pow(3, n);

        string s(length, '-');
        cantorSet(s, 0, length - 1, n);

        cout << s << "\n";
    }
    
    return 0;
}
​
