#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<string> s(n);
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	sort(s.begin(), s.end());

	vector<string> temp(m);
	for (int i = 0; i < m; i++)
	{
		cin >> temp[i];
	}

	int result = 0;
	for (int i = 0; i < m; i++)
	{
		if (binary_search(s.begin(), s.end(), temp[i])) {
			result++;
		}
	}

	cout << result << "\n";

	return 0;
}

//===============================================================

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    unordered_set<string> s;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        s.insert(str); // 문자열을 집합 S에 삽입
    }

    int result = 0;
    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        if (s.find(str) != s.end()) { // 문자열이 집합에 있는지 확인
            result++;
        }
    }

    cout << result << "\n";

    return 0;
}
