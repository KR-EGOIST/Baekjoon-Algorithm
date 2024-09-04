#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            cnt++;
        }
    }

    cout << cnt << "\n";
    
    return 0;
}

//-------------------------------------------------

#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    // 서로 다른 색상 조합의 수 계산
    int cnt = n * (n - 1);
    
    cout << cnt << "\n";

    return 0;
}
