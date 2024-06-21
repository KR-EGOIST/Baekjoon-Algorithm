#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;

	// 세 각의 합이 180이 아닌 경우에는 Error
	if ((a + b + c) != 180) {
		cout << "Error" << "\n";
	}
	// 세 각의 크기가 모두 60이면, Equilateral
	else if (a == b && b == c) {
		cout << "Equilateral" << "\n";
	}
	// 세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
	else if (a == b || b == c || a == c) {
		cout << "Isosceles" << "\n";
	}
	// 세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
	else {
		cout << "Scalene" << "\n";
	}

	return 0;
}
