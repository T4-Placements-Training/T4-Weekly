// Problem Link:
// https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

// TC: O(r*c)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

void helper(int rs, int re, int cs, int ce, vector<vector<int>> &matrix, vector<int> &res)
{
    for (int i = cs; i <= ce; ++i)
        res.push_back(matrix[rs][i]);

    for (int i = rs + 1; i <= re; ++i)
        res.push_back(matrix[i][ce]);

    if (rs != re)
        for (int i = ce - 1; i >= cs; --i)
            res.push_back(matrix[re][i]);

    if (cs != ce)
        for (int i = re - 1; i > rs; --i)
            res.push_back(matrix[i][cs]);
}

vector<int> spirallyTraverse(vector<vector<int>> &matrix, int r, int c)
{
    vector<int> res{};
    int rs{}, re{r - 1}, cs{}, ce{c - 1};
    int t = max(r, c) / 2;

    while (rs <= re and cs <= ce)
        helper(rs++, re--, cs++, ce--, matrix, res);

    return res;
}

void solve()
{
    vector<vector<int>> matrix{{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12}};
    int r = matrix.size(), c = matrix[0].size();

    auto res = spirallyTraverse(matrix, r, c);
    for (int i : res)
        cout << i << " ";
    cout << endl;
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