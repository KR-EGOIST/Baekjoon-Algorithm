#include <iostream>
#include <vector>

using namespace std;

#define SIZE 9

// 유효성 검사 함수
bool isValid(int row, int col, int num, const vector<vector<int>>& board){
    // 행 검사
    for(int i = 0; i < SIZE; ++i){
        if(board[row][i] == num) return false;
    }

    // 열 검사
    for(int i = 0; i < SIZE; ++i){
        if(board[i][col] == num) return false;
    }

    // 3x3 박스 검사
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for(int i = startRow; i < startRow + 3; ++i){
        for(int j = startCol; j < startCol + 3; ++j){
            if(board[i][j] == num) return false;
        }
    }

    return true;
}

// 백트래킹 함수
bool solveSudoku(vector<vector<int>>& board){
    for(int row = 0; row < SIZE; ++row){
        for(int col = 0; col < SIZE; ++ col){
            if(board[row][col] == 0){ // 빈 칸을 찾았을 때
                for(int num = 1; num <= 9; ++num){
                    if(isValid(row, col, num, board)){
                        board[row][col] = num;
                        if(solveSudoku(board)){
                            return true;
                        }
                        board[row][col] = 0; // 백트래킹
                    }
                }
                return false; // 더 이상 진행할 수 없으면 false 반환
            }
        }
    }
    return true; // 모든 빈 칸이 채워졌다면 true 반환
}

// 입력 함수
void inputBoard(vector<vector<int>>& board){
    for(int i = 0; i < SIZE; ++i){
        for(int j = 0; j < SIZE; ++j){
            cin >> board[i][j];
        }
    }
}

// 출력 함수
void printBoard(const vector<vector<int>>& board){
    for(int i = 0; i < SIZE; ++i){
        for(int j = 0; j < SIZE; ++j){
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    vector<vector<int>> board(SIZE, vector<int>(SIZE)); // 스도쿠 판

    inputBoard(board); // 스도쿠 판 입력 받기
    solveSudoku(board); // 스도쿠 풀기
    printBoard(board); // 결과 출력
    
    return 0;
}
