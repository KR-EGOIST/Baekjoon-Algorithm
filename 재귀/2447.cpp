#include <iostream>
#include <vector>

using namespace std;

// 주어진 패턴에 대해 가운데 부분을 공백으로 설정하고 재귀적으로 패턴을 그리는 함수
void drawPattern(vector<vector<char>>& star, int startRow, int startCol, int size) {
    if (size == 1) return;

    int subSize = size / 3;

    for (int row = startRow; row < startRow + size; row += subSize) {
        for (int col = startCol; col < startCol + size; col += subSize) {
            // 현재 블록이 가운데 블록인지 확인
            if ((row / subSize) % 3 == 1 && (col / subSize) % 3 == 1) {
                // 가운데 부분을 공백으로 설정
                for (int i = row; i < row + subSize; ++i) {
                    for (int j = col; j < col + subSize; ++j) {
                        star[i][j] = ' ';
                    }
                }
            } else {
                drawPattern(star, row, col, subSize);
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<vector<char>> star(n, vector<char>(n, '*'));

    drawPattern(star, 0, 0, n);
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << star[i][j];
        }
        cout << '\n';
    }
    
    return 0;
}
