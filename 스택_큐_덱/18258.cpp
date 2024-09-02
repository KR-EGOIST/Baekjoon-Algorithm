#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    while(n--){
        string cmd;
        cin >> cmd;

        if(cmd == "push"){
            int num;
            cin >> num;
            q.push(num);
        } else if (cmd == "pop"){
            if (q.empty()){
                cout << -1 << "\n";
            } else {
                cout << q.front() << "\n";
                q.pop();
            }
        } else if (cmd == "size"){
            cout << q.size() << "\n";
        } else if (cmd == "empty"){
            cout << q.empty() << "\n";
        } else if (cmd == "front"){
            if (q.empty()){
                cout << -1 << "\n";
            } else {
                cout << q.front() << "\n";
            }
        } else if (cmd == "back"){
            if (q.empty()){
                cout << -1 << "\n";
            } else {
                cout << q.back() << "\n";
            }
        }
    }
    
    return 0;
}
