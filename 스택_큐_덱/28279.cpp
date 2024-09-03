#include <iostream>
#include <deque>

using namespace std;

deque<int> dq;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    while(n--){
        int cmd;
        cin >> cmd;
        
        switch(cmd){
            case 1:
                int x;
                cin >> x;
                dq.push_front(x);
                break;
            case 2:
                int y;
                cin >> y;
                dq.push_back(y);
                break;
            case 3:
                if(!dq.empty()){
                    cout << dq.front() << "\n";
                    dq.pop_front();
                } else {
                    cout << -1 << "\n";
                }
                break;
            case 4:
                if(!dq.empty()){
                    cout << dq.back() << "\n";
                    dq.pop_back();
                } else {
                    cout << -1 << "\n";
                }
                break;
            case 5:
                cout << dq.size() << "\n";
                break;
            case 6:
                cout << dq.empty() << "\n";
                break;
            case 7:
                if(!dq.empty()){
                    cout << dq.front() << "\n";
                } else {
                    cout << -1 << "\n";
                }
                break;
            case 8:
                if(!dq.empty()){
                    cout << dq.back() << "\n";
                } else {
                    cout << -1 << "\n";
                }
                break;
        }
    }
    
    return 0;
}
