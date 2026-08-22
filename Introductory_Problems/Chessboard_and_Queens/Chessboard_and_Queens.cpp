/*
 * Problem Name: Chessboard_and_Queens
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-22
 */

#include <bits/stdc++.h>
    using namespace std;
 
char board[8][8];
 
bool column[8];
bool diag1[15]; // row + col
bool diag2[15]; // row - col + 7
 
int ans = 0;
 
void solve(int row)
{
    // We successfully placed 8 queens
    if (row == 8)
    {
        ans++;
        return;
    }
 
    // Try every column in this row
    for (int col = 0; col < 8; col++)
    {
        // Reserved square
        if (board[row][col] == '*')
            continue;
 
        // Column or diagonal already occupied
        if (column[col])
            continue;
 
        if (diag1[row + col])
            continue;
 
        if (diag2[row - col + 7])
            continue;
 
        // Place queen
        column[col] = true;
        diag1[row + col] = true;
        diag2[row - col + 7] = true;
 
        solve(row + 1);
 
        // Remove queen (backtrack)
        column[col] = false;
        diag1[row + col] = false;
        diag2[row - col + 7] = false;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // Input board
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> board[i][j];
        }
    }
 
    solve(0);
 
    cout << ans << '\n';
 
    return 0;
}
 