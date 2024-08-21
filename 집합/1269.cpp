#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	unordered_map<int, int> m;
	int num;
	for (int i = 0; i < a + b; i++)
	{
		cin >> num;
		m[num]++;
	}

	int count = 0;
	for (pair<int, int> p : m) {
		if (p.second == 1) {
			count++;
		}
	}

	cout << count << "\n";

	return 0;
}

//------------------------------------------------------------

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    unordered_set<int> setA, setB;

    int num;
    // 집합 A 입력
    for (int i = 0; i < a; i++) {
        cin >> num;
        setA.insert(num);
    }

    // 집합 B 입력
    for (int i = 0; i < b; i++) {
        cin >> num;
        setB.insert(num);
    }

    // A - B 구하기
    int count = 0;
    for (int element : setA) {
        if (setB.find(element) == setB.end()) {
            count++;
        }
    }

    // B - A 구하기
    for (int element : setB) {
        if (setA.find(element) == setA.end()) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}
