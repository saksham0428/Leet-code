class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));
        vector<int> cols(n, 0), diag1(2 * n - 1, 0), diag2(2 * n - 1, 0);
        solve(0, n, board, result, cols, diag1, diag2);
        return result;
    }

    void solve(int row, int n, vector<string>& board, vector<vector<string>>& result,
               vector<int>& cols, vector<int>& diag1, vector<int>& diag2) {
        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < n; ++col) {
            int d1 = row - col + n - 1;
            int d2 = row + col;

            if (cols[col] || diag1[d1] || diag2[d2]) continue;

            board[row][col] = 'Q';
            cols[col] = diag1[d1] = diag2[d2] = 1;

            solve(row + 1, n, board, result, cols, diag1, diag2);

            board[row][col] = '.';
            cols[col] = diag1[d1] = diag2[d2] = 0;
        }
    }
};
