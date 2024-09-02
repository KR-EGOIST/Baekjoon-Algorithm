#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int k;
    cin >> k;

    for(int i = 1; i <= k; i++){
        q.push(i);
    }

    while(q.size() != 1){
        q.pop();

        int front = q.front();
        q.pop();
        q.push(front);
    }

    if(q.size() == 1){
        cout << q.front() << "\n";
    }
    
    return 0;
}

//------------------------------------------------------

#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    int largest_power_of_two = 1;
    while (largest_power_of_two * 2 <= N) {
        largest_power_of_two *= 2;
    }

    int result = (N - largest_power_of_two) * 2 + 1;
    cout << result << "\n";

    return 0;
}
​
