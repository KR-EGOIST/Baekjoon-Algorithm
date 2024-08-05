#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm> // sort 함수를 사용하기 위한 헤더 파일

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    unordered_set<int> unique_numbers;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        unique_numbers.insert(num); // 중복이 허용되지 않는 unordered_set에 삽입
    }

    vector<int> sorted_numbers(unique_numbers.begin(), unique_numbers.end()); // vector로 변환
    sort(sorted_numbers.begin(), sorted_numbers.end()); // vector를 정렬

    for (int i = 0; i < sorted_numbers.size(); i++) {
        cout << sorted_numbers[i] << "\n";
    }

    return 0;
}

//----------------------------------------------------------------------------------

#include<iostream>
#include<set>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	set<int> s;
	int n;
	cin >> n;

	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		s.insert(num);
	}

	set<int>::iterator iter = s.begin();
	for (iter; iter != s.end(); iter++)
	{
		cout << *iter << "\n";
	}

	return 0;
}
