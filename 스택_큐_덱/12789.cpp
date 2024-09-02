#include <iostream>
#include <stack>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    stack<int> s;
    int cnt = 1;
    int t;
    while(n--){
        cin >> t;

        
        if(t == cnt){ // 순번이 일치하면 통과
            cnt++;
        }
        else { // 아니면 스택에 push
            s.push(t);
        }

        // 스택의 top과 순번이 일치하면 통과
        while(!s.empty() && s.top() == cnt){
            s.pop();
            cnt++;
        }
    }

    if(s.empty()){
        cout << "Nice" << "\n";
    }
    else {
        cout << "Sad" << "\n";
    }
    
    return 0;
}
