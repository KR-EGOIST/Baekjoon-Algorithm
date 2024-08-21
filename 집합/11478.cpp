#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    unordered_set<string> set;
    
    // 부분 문자열 구하기
    for(int i = 0; i < s.length(); i++){
        for(int j = 1; j <= s.length() - i; j++){
            // s.substr(i, j): i번 인덱스에서 시작하는 길이가 j인 문자열
            set.insert(s.substr(i, j));
        }
    }

    cout << set.size() << "\n";
    
    return 0;
}
