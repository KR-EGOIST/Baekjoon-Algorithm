#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, k;
    cin >> n >> k;

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    vector<int> v;
    while(!q.empty()){
        for(int i = 0; i < k - 1; i++){
            int front = q.front();
            q.pop();
            q.push(front);            
        }
        
        int earse = q.front();
        q.pop();
        v.push_back(earse);
    }

    cout << "<";
    for(int i = 0; i < n; i++){
        cout << v[i];
            
        if(i != n - 1) {
            cout << ", ";
        }
    }
    cout << ">" << "\n";
    
    return 0;
}

//---------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    vector<int> result;
    int idx = 0;
    while (!v.empty()) {
        idx = (idx + k - 1) % v.size(); // 현재 위치에서 K-1만큼 이동
        result.push_back(v[idx]);       // 해당 위치의 사람을 제거하고 결과에 추가
        v.erase(v.begin() + idx);       // 벡터에서 제거
    }

    cout << "<";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << ">" << "\n";
    
    return 0;
}
​
