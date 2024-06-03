/*
최댓값이 두 개 이상인 경우 그 중 한 곳의 위치를 출력한다.
라고 해서 가장 처음나온 최댓값 위치를 반환했는데 계속 틀렸다고해서 최댓값 위치를 다음 최댓값 위치로 반환했더니 맞았다.. 머지..
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<vector<int>> v(9, vector<int>(9, 0));
	int max = 0;
	int x, y = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> v[i][j];

			if (max <= v[i][j]) {
				max = v[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}

	cout << max << "\n";
	cout << x << " " << y << "\n";

	return 0;
}
