// Problem Link:
// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

// TC: O(n^2)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int celebrity(vector<vector<int>> &grid, int n)
{
    int count{-1};

    for (int i = 0; i < n; ++i)
    {
        int curr{};
        for (int j = 0; j < n; ++j)
            curr += grid[i][j];
        if (curr == 0)
        {
            if (count == -1)
                count = i;
            else
                return -1;
        }
    }

    return count;
}

void solve()
{
    vector<vector<int>> grid{{0, 1, 0},
                             {0, 0, 0},
                             {0, 1, 0}};

    int n = grid.size();

    cout << celebrity(grid, n) << endl;
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