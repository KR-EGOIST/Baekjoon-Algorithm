#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	
	map<string, string> employee;
	string name;
	string status;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> status;
		employee[name] = status;
	}

	vector<string> v;
	for (auto it = employee.begin(); it != employee.end(); it++)
	{
		if (it->second == "enter") {
			v.push_back(it->first);
		}
	}

	sort(v.rbegin(), v.rend());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}

//==============================================================

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    unordered_map<string, string> employee; // 출입 기록을 저장할 해시맵
    string name, status;
    for (int i = 0; i < n; ++i) {
        cin >> name >> status;
        employee[name] = status; // 이름을 키로 하여 상태를 업데이트
    }

    vector<string> in_office;
    for (const auto& [name, status] : employee) { // C++17의 구조적 바인딩
        if (status == "enter") {
            in_office.push_back(name);
        }
    }

    sort(in_office.rbegin(), in_office.rend()); // 역순으로 정렬

    for (const auto& name : in_office) {
        cout << name << "\n"; // 현재 회사에 있는 사람 출력
    }

    return 0;
}
