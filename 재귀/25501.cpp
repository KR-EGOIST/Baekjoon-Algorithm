#include <iostream>
#include <string>
#include <vector>

using namespace std;

int cnt; // 함수 호출 횟수를 세기 위한 변수

pair<int, int> recursion(const string &s, int l, int r){
    cnt++;
    if(l >= r) return make_pair(1, cnt); // return {1, cnt};
    else if(s[l] != s[r]) return make_pair(0, cnt); // return {0, cnt};
    else return recursion(s, l + 1, r - 1);
}

pair<int, int> isPalindrome(const string &s){
    cnt = 0; // 각 문자열마다 호출 횟수를 0으로 초기화
    return recursion(s, 0, s.length()-1);
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    vector<pair<int, int>> result(t);
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        result[i] = isPalindrome(s);
    }

    for (const auto& res : result) {
        cout << res.first << " " << res.second << "\n";
    }

    return 0;
}
