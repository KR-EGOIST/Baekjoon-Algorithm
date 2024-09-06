#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
    // 1. 빈도수가 높은 단어일수록 앞에 배치
    if (a.second != b.second) {
        return a.second > b.second;
    }
    // 2. 길이가 긴 단어일수록 앞에 배치
    if (a.first.length() != b.first.length()) {
        return a.first.length() > b.first.length();
    }
    // 3. 사전순으로 앞에 있는 단어일수록 앞에 배치
    return a.first < b.first;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> word_map;
    
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if(word.length() >= m){
            word_map[word]++;
        }
    }

    vector<pair<string, int>> words(word_map.begin(), word_map.end());
    sort(words.begin(), words.end(), compare);
    
    for (const auto word : words) {
        cout << word.first << "\n";
    }
    
    return 0;
}
​
