// Problem Link:
// https://leetcode.com/problems/maximum-subarray/

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int maxSubArray(vector<int> &nums)
{
    int curr{}, res{INT_MIN};
    int n = nums.size();

    for (int i = 0; i < n; ++i)
    {
        curr += nums[i];
        res = max(res, curr);

        if (curr < 0)
            curr = 0;
    }

    return res;
}

void solve()
{
    vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubArray(nums) << endl;
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