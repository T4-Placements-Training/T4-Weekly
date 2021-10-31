// Problem Link:
// https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
// https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int helper(int arr[], int n, vector<int> &dp)
{
    if (n <= 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];

    int res1 = arr[n - 1] + helper(arr, n - 2, dp);
    int res2 = helper(arr, n - 1, dp);

    return dp[n] = max(res1, res2);
}

int findMaxSum(int arr[], int n)
{
    vector<int> dp(n + 1, -1);
    return helper(arr, n, dp);
}

void solve()
{
    int arr[]{5, 5, 10, 100, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << findMaxSum(arr, n) << endl;
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