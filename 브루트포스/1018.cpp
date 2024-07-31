#include <iostream>
#include <algorithm>
using namespace std;

char chess[50][50];
char white_arr[8][8] = {
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W'
};

char black_arr[8][8] = {
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B'
};

int count_mismatches(char board[8][8], int x, int y, char pattern[8][8]) {
    int mismatches = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (chess[x + i][y + j] != pattern[i][j]) {
                mismatches++;
            }
        }
    }
    return mismatches;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> chess[i][j];
        }
    }

    int min_changes = 64;  // 최대 변경 수는 64개 (8x8 보드 전체)

    for (int i = 0; i <= n - 8; ++i) {
        for (int j = 0; j <= m - 8; ++j) {
            int white_mismatches = count_mismatches(chess, i, j, white_arr);
            int black_mismatches = count_mismatches(chess, i, j, black_arr);
            min_changes = min(min_changes, min(white_mismatches, black_mismatches));
        }
    }

    cout << min_changes << '\n';

    return 0;
}
