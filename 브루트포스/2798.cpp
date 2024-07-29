#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> v;	// 카드 배열

	int n, m;	// n : 카드 갯수 , m : 3개 카드의 합
	cin >> n >> m;

	// 카드 n 개 저장
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	// 3개 카드의 합이 m 보다 작거나 같은 경우의 모든 값을 result 배열에 저장
	vector<int> result;
	for (int i = 0; i < v.size() - 2; i++)
	{
		for (int j = i + 1; j < v.size() - 1; j++)
		{
			for (int k = j + 1; k < v.size(); k++)
			{
				if (v[i] + v[j] + v[k] <= m) {
					result.push_back(v[i] + v[j] + v[k]);
				}
			}
		}
	}

	// result 배열 중 가장 큰 값을 max 에 저장
	int max = *max_element(result.begin(), result.end());

	cout << max << "\n";

	return 0;
}

//-----------------------------------------------------------------------

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findBestSum(vector<int>& cards, int n, int m) {
	int bestSum = 0;

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			int left = j + 1;
			int right = n - 1;

			while (left <= right) {
				int mid = (left + right) / 2;
				int curSum = cards[i] + cards[j] + cards[mid];

				if (curSum > m) {
					right = mid - 1;
				}
				else {
					if (curSum > bestSum) {
						bestSum = curSum;
					}
					left = mid + 1;
				}
			}
		}
	}

	return bestSum;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<int> cards;

	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		cards.push_back(num);
	}

	sort(cards.begin(), cards.end());

	int result = findBestSum(cards, n, m);

	cout << result << "\n";

	return 0;
}
