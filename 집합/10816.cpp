#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	unordered_map<int, int> card;
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		card[num]++;  // 존재 여부를 확인할 필요 없이 바로 값 증가
	}

	int m;
	cin >> m;

	int search;
	for (int i = 0; i < m; i++)
	{
		cin >> search;
		cout << card[search] << " ";	// map에 존재하지 않으면 자동으로 0을 출력
	}
	cout << "\n";

	return 0;
}
