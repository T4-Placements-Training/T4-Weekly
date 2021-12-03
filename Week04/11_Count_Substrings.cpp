// Problem Link:
// https://practice.geeksforgeeks.org/problems/count-substrings0427/1

// TC: O()
// SC: O()

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int nCr(int n, int r, vector<vector<int>> &dp)
{
    if (r > n)
        return 0;
    if (r == 0 or r == n)
        return 1;

    if (dp[n][r] != -1)
        return dp[n][r];
    return dp[n][r] = nCr(n - 1, r - 1, dp) + nCr(n - 1, r, dp);
}

int countSubstr(string s)
{
    int count{};

    for (char c : s)
        if (c == '1')
            count++;

    if (count <= 1)
        return 0;

    vector<vector<int>> dp(count + 1, vector<int>(2 + 1, -1));
    return nCr(count, 2, dp);
}

void solve()
{
    string s{"10101"};

    cout << countSubstr(s) << endl;
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