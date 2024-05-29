/*
reverse() 함수

reverse(first, last); 

first를 포함한 인덱스부터 last 바로 전 인덱스까지의 요소들을 거꾸로 뒤집음
=> 중요한 건, '인덱스'를 집어넣어야 한다는 것.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> v) {
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << ' ';
	}
	cout << "\n";
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<int> v;
	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
	}

	int a, b;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		int start = a - 1;
		int end = v.size() - b;
		reverse(v.begin() + start, v.end() - end);
	}

	print(v);

	return 0;
}
