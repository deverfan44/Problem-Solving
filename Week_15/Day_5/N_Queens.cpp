#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool issafe(int row, int col,vector<string>& board, int n) {
    int tmprow = row;
    int tmpcol = col;

    while(row >= 0 && col>=0) {
        if(board[row][col]=='Q') return false;
        row--;
        col--;
    }

    col = tmpcol;
    row = tmprow;
    while(col>=0) {
        if(board[row][col]=='Q') return false;
        col--;
    }

    col = tmpcol;
    row = tmprow;

    while(row<n && col>=0) {
        if(board[row][col]=='Q') return false;
        row++;
        col--;
    }

    return true;
}
void n_queens(int col, vector<string>& board, vector<vector<string>>& ans, int n) {
    if(col == n) {
        ans.push_back(board);
        return;
    }

    for(int row=0; row<n; row++) {
        if(issafe(row, col, board, n)) {
            board[row][col] = 'Q';
            n_queens(col+1, board, ans, n);
            board[row][col] = '.';
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0; i<n; i++) {
        board[i] = s;
    }
    n_queens(0,board,ans,n);

    for(auto x: ans) {
        for(auto y: x) {
            for(int i=0; i<y.size(); i++) {
                cout << y[i];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}