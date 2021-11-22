// Problem Link:
// https://practice.geeksforgeeks.org/problems/tic-tac-toe2412/1

// TC: O(1)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int count(char board[9], char target)
{
    int count{};

    for (int i = 0; i < 9; ++i)
        if (board[i] == target)
            count++;

    return count;
}

bool isWinner(char board[9], char target)
{
    // Check rows
    for (int i = 0; i < 3; ++i)
    {
        bool flag{true};

        for (int j = 0; j < 3; ++j)
            if (board[(i * 3) + j] != target)
            {
                flag = false;
                break;
            }

        if (flag)
            return true;
    }

    // Check cols
    for (int i = 0; i < 3; ++i)
    {
        bool flag{true};

        for (int j = 0; j < 3; ++j)
            if (board[(j * 3) + i] != target)
            {
                flag = false;
                break;
            }

        if (flag)
            return true;
    }

    // Check diagonal
    if (board[0] == board[4] and board[0] == board[8] and board[0] == target)
        return true;
    if (board[2] == board[4] and board[2] == board[6] and board[2] == target)
        return true;

    return false;
}

bool isValid(char board[9])
{
    if (count(board, 'X') - count(board, 'O') != 1)
        return false;

    bool oWin = isWinner(board, 'O');
    bool xWin = isWinner(board, 'X');

    if (oWin and xWin)
        return false;

    if (oWin)
        return false;
    return true;
}

void solve()
{
    char board[]{'X', 'X', 'O',
                 'O', 'O', 'X',
                 'X', 'O', 'X'};

    cout << isValid(board) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t{1}, i{1};
    // cin >> t;
    while (t--)
    {
        // cout << "Case #" << i++ << ": ";
        solve();
    }
    return 0;
}