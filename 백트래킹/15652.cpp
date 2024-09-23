#include <iostream>
#include <vector>

using namespace std;

void dfs(int n, int m, int start, vector<int>& sequence){
    if(sequence.size() == m){
        for(const int& num : sequence){
            cout << num << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = start; i <= n; i++){
        sequence.push_back(i);
        dfs(n, m, i, sequence);
        sequence.pop_back();
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int start = 1;
    vector<int> sequence;
    
    dfs(n, m, start, sequence);
    
    return 0;
}
