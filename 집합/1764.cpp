#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_set>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	unordered_set<string> listen; // 듣도 못한 사람의 집합
	string name;
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		listen.insert(name);
	}

	vector<string> result;
	for (int i = 0; i < m; i++)
	{
		cin >> name;
		if (listen.find(name) != listen.end()) {
			result.push_back(name);
		}
	}

	sort(result.begin(), result.end()); // 결과를 정렬

	cout << result.size() << "\n";
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << "\n";
	}

	return 0;
}
