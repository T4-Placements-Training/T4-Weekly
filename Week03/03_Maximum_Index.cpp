// Problem Link:
// https://practice.geeksforgeeks.org/problems/maximum-index-1587115620/1

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int maxIndexDiff(int nums[], int n)
{
    queue<pair<int, int>> nodeQu{};
    nodeQu.push({0, n - 1});

    while (!nodeQu.empty())
    {
        auto curr = nodeQu.front();
        nodeQu.pop();

        if (nums[curr.first] <= nums[curr.second])
            return curr.second - curr.first;
        if (curr.first + 1 <= curr.second)
            nodeQu.push({curr.first + 1, curr.second});
        if (curr.first <= curr.second - 1)
            nodeQu.push({curr.first, curr.second - 1});
    }

    return -1;
}

void solve()
{
    int nums[]{34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << maxIndexDiff(nums, n) << endl;
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