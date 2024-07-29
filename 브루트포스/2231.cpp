#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int result = 0;

	// 1부터 n까지 순회
	for (int i = 1; i < n; i++)
	{
		int sum = 0;	// 누적합
		int num = i;

		// num / 10 이 0이 될 때까지 반복
		while (1) {
			sum += num % 10;
			num /= 10;

			if (num == 0) {
				break;
			}
		}

		// sum + i 가 n 과 같다면 i 가 생성자이다.
		if (sum + i == n) {
			result = i;
			break;
		}

	}

	cout << result << "\n";

	return 0;
}

//-------------------------------------------------------------

#include <iostream>
#include <string>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 1; i < n; i++) {
        int sum = i;
        string num_str = to_string(i);

        sum += accumulate(num_str.begin(), num_str.end(), 0, [](int acc, char c) {
            return acc + (c - '0');
            });

        if (sum == n) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << 0 << "\n";
    return 0;
}
