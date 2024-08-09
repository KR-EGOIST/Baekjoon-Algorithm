#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	string s = "";
	while (n > 0) {
		s += to_string(n % 10);
		n /= 10;
	}

	sort(s.rbegin(), s.rend());

	int result = stoi(s);

	cout << result << "\n";

	return 0;
}

//---------------------------------------------

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    // 숫자를 문자열로 변환
    string s = to_string(n);

    // 문자열을 내림차순으로 정렬
    sort(s.rbegin(), s.rend());

    // 정렬된 문자열을 출력
    cout << s << "\n";

    return 0;
}
