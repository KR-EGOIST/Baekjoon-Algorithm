#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>

using namespace std;

// 최빈값 비교 함수
bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first; // 빈도가 같을 경우 작은 값을 우선
    } else {
        return a.second > b.second; // 빈도가 다르면 빈도가 큰 것을 우선
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    vector<int> numbers(n); // 입력받을 숫자를 저장할 벡터
    unordered_map<int, int> freq_map; // 최빈값 계산을 위한 빈도 맵
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
        sum += numbers[i]; // 전체 합 계산
        freq_map[numbers[i]]++; // 빈도 기록
    }

    // 1. 산술평균
    double avg = round((double)sum / n); // 소수점 첫째 자리에서 반올림
    if (avg == -0) avg = 0; // -0이 출력되는 것을 방지
    cout << avg << "\n";

    // 2. 중앙값
    sort(numbers.begin(), numbers.end());
    cout << numbers[n/2] << "\n";

    // 3. 최빈값
    vector<pair<int, int>> freq_list(freq_map.begin(), freq_map.end()); // 빈도 맵을 벡터로 변환
    sort(freq_list.begin(), freq_list.end(), compare); // 빈도 순으로 정렬

    // 최빈값이 여러 개일 때 두 번째로 작은 값 출력
    if(freq_list.size() > 1 && freq_list[0].second == freq_list[1].second){
        cout << freq_list[1].first << "\n"; // 두 번째로 작은 최빈값 출력
    } else {
        cout << freq_list[0].first << "\n"; // 최빈값 출력
    }

    // 4. 범위
    cout << numbers.back() - numbers.front() << "\n";

    return 0;
}
