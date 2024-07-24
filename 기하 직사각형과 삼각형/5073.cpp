#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c;
	while (true) {
		cin >> a >> b >> c;

		// 입력값이 0, 0, 0 일 경우 프로그램 종료
		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		// 가장 긴 변을 찾기 위해 오름차순 정렬
		int sides[3] = { a, b, c };

		sort(sides, sides + 3);

		// 가장 긴 변이 나머지 두 변의 길이의 합보다 크거나 같으면 Invalid
		if (sides[2] >= sides[0] + sides[1]) {
			cout << "Invalid" << "\n";
			continue;
		}

		// 세 변의 길이가 모두 같으면 Equilateral
		if (a == b && b == c) {
			cout << "Equilateral" << "\n";
			continue;
		}
		// 두 변의 길이가 모두 같으면 Isosceles
		else if (a == b || a == c || b == c) {
			cout << "Isosceles" << "\n";
			continue;
		}
		// 세 변의 길이가 모두 다르면 Scalene
		else {
			cout << "Scalene" << "\n";
			continue;
		}
	}

	return 0;
}
