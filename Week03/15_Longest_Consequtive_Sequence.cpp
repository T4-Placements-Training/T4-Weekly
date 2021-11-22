// Problem Link:
// https://leetcode.com/problems/longest-consecutive-sequence/

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> hash{};
    int res{};

    for (int i : nums)
        hash.insert(i);

    for (int i = 0; i < nums.size(); ++i)
    {
        if (hash.find(nums[i] + 1) == hash.end())
        {
            int curr{nums[i] - 1};
            while (hash.find(curr) != hash.end())
                curr--;
            res = max(res, nums[i] - curr);
        }
    }

    return res;
}

void solve()
{
    vector<int> nums{100, 4, 200, 1, 3, 2};

    cout << longestConsecutive(nums) << endl;
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