// Problem Link:
// https://practice.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space1004/1

// TC: O(n^2)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

void rotateMatrix(vector<vector<int>> &arr, int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n - i; ++j)
            swap(arr[i][j], arr[n - j - 1][n - i - 1]);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n / 2; ++j)
            swap(arr[i][j], arr[i][n - j - 1]);
}

void print(vector<vector<int>> &arr)
{
    for (auto i : arr)
    {
        for (int j : i)
            cout << j << " ";
        cout << endl;
    }
}

void solve()
{
    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = arr.size();

    print(arr);
    cout << endl;

    rotateMatrix(arr, n);

    print(arr);
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