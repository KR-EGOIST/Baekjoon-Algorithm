#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    
    while(t--){
        string ps;
        cin >> ps;

        stack<char> s;
        bool isVPN = true;
        
        for(char ch : ps){
            if(ch == '('){
                s.push(ch);
            } else {
                if(!s.empty() && s.top() == '('){
                    s.pop();
                } else {
                    isVPN = false;
                    break;
                }
            }
        }

        if(!s.empty()){
            isVPN = false;
        }

        cout << (isVPN ? "YES" : "NO") << "\n";
    }

    return 0;
}
