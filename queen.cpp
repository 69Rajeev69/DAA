#include <iostream>
#include <vector>
using namespace std;
bool isSafe(vector<int>& board, int row, int col) {
    for (int i = 0; i < row; ++i)
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
            return false;
    return true;
}
void solveNQueens(vector<int>& board, int row, int& count) {
    int N = board.size();
    if (row == N) {
        ++count;
        return;
    }
    for (int col = 0; col < N; ++col) {
        if (isSafe(board, row, col)) {
            board[row] = col;
            solveNQueens(board, row + 1, count);
        }
    }
}
int main() {
    int N;
    cin >> N;
    vector<int> board(N);
    int count = 0;
    solveNQueens(board, 0, count);
    cout << count << endl;
    return 0;
}
