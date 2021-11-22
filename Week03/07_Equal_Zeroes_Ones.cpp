// Problem Link:
// https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int maxLen(int nums[], int n)
{
    unordered_map<int, int> hash;
    int curr{}, res{};

    for (int i = 0; i < n; ++i)
        if (nums[i] == 0)
            nums[i] = -1;

    for (int i = 0; i < n; ++i)
    {
        curr += nums[i];
        if (curr == 0)
            res = max(res, i + 1);

        if (hash.find(curr) != hash.end())
            res = max(res, i - hash[curr]);
        else
            hash[curr] = i;
    }

    return res;
}

void solve()
{
    int nums[]{0, 0, 1, 0, 0};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << maxLen(nums, n) << endl;
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