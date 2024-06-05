/*
반대로 n 을 b 로 나누면서 나머지 값을 가지고 b 진법 값으로 바꾸면 된다.
A 는 10 .... Z 는 35 이므로 -10 을 해준다
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, b;
	cin >> n >> b;

	string result = "";
	while (n > 0) {
		int temp = n % b;
		if (temp < 10) {
			result += (char)(temp + '0');
		}
		else {
			result += (char)(temp + 'A' - 10);
		}
		n /= b;
	}

	reverse(result.begin(), result.end());

	cout << result << "\n";

	return 0;
}
