#include<iostream>
#include<stack>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    stack<int> s;

    int cmd;
    for (int i = 0; i < n; i++)
    {
        cin >> cmd;

        switch (cmd)
        {
        case 1:
            int x;
            cin >> x;
            s.push(x);
            break;
        case 2:
            if (!s.empty())
            {
                cout << s.top() << "\n";
                s.pop();
            }
            else
            {
                cout << -1 << "\n";
            }
            break;
        case 3:
            cout << s.size() << "\n";
            break;
        case 4:
            if (s.empty())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
            break;
        case 5:
            if (!s.empty())
            {
                cout << s.top() << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
            break;
        }
    }

    return 0;
}
