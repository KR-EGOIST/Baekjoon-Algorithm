#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<string> v;
	string word;
	for (int i = 0; i < n; i++)
	{
		cin >> word;
		v.push_back(word);
	}

	sort(v.begin(), v.end(), compare);	// 사용자 정의 정렬

	v.erase(unique(v.begin(), v.end()), v.end());	// 중복 제거

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}

//-------------------------------------------------------------

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    set<string> uniqueWords; // 중복 제거를 위한 set 사용
    string word;
    for (int i = 0; i < n; i++) {
        cin >> word;
        uniqueWords.insert(word); // set에 단어 삽입 (자동 중복 제거)
    }

    vector<string> v(uniqueWords.begin(), uniqueWords.end()); // set을 vector로 변환

    // 사용자 정의 정렬
    sort(v.begin(), v.end(), [](const string& a, const string& b) {
        return a.length() == b.length() ? a < b : a.length() < b.length();
    });

    for (const auto& str : v) {
        cout << str << "\n";
    }

    return 0;
}
