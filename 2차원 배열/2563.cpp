#include<iostream>
#include<vector>
using namespace std;

int main() {
	// 가로 세로의 크기가 각각 100인 정사각형 모형의 흰색 도화지
	vector<vector<int>> v(100, vector<int>(100, 0));
	int area = 0;

	// (x, y) 좌표를 입력할 횟수
	int n;
	cin >> n;

	// 가로, 세로의 크기가 각각 10인 정사각형 모양의 검은색 색종이
	// x 부터 x + 10 까지
	// y 부터 y + 10 까지
	// 해당 영역의 값이 0 이면 1로 변경
	// 각 한칸당 넓이는 1 이므로 area++
	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				if (v[j][k] == 0) {
					v[j][k] = 1;
					area++;
				}
			}
		}

	}

	cout << area;

	return 0;
}
