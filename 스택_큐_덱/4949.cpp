#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    while(true){
        string str;
        getline(cin, str);

        if(str == "."){
            break;
        }

        stack<char> s;
        bool isBalanced = true;

        for(char ch : str){
            if(ch == '(' || ch == '['){
                s.push(ch);
            } else if (ch == ')' || ch == ']') {
                if(s.empty() || (ch == ')' && s.top() != '(') || (ch == ']' && s.top() != '[')){
                    isBalanced = false;
                    break;
                }
                s.pop();
            }
        }

        if(!s.empty()){
            isBalanced = false;
        }

        cout << (isBalanced ? "yes" : "no") << "\n";
    }
    
    return 0;
}
