// Problem Link:
// https://leetcode.com/problems/find-pivot-index/

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int pivotIndex(vector<int> &nums)
{
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0), curr{};

    for (int i = 0; i < n; ++i)
    {
        if (curr == sum - nums[i] - curr)
            return i;
        curr += nums[i];
    }

    return -1;
}

void solve()
{
    vector<int> nums{1, 7, 3, 6, 5, 6};

    cout << pivotIndex(nums) << endl;
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