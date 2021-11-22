// Problem Link:
// https://leetcode.com/problems/partition-to-k-equal-sum-subsets/

// TC: O(2^(n*n))
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool helper(vector<int> &nums, int target, int curr, int k, int index)
{
    if (k == 0)
        return true;
    if (curr == 0)
        return helper(nums, target, target, k - 1, 0);

    for (int i = index; i < nums.size(); ++i)
    {
        if (nums[i] != -1 and curr - nums[i] >= 0)
        {
            int temp = nums[i];
            nums[i] = -1;
            if (helper(nums, target, curr - temp, k, index + 1))
                return true;
            nums[i] = temp;
        }
    }

    return false;
}

bool canPartitionKSubsets(vector<int> &nums, int k)
{
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum % k)
        return false;
    int target = sum / k;

    return helper(nums, target, 0, k, 0);
}

void solve()
{
    vector<int> nums{4, 3, 2, 3, 5, 2, 1};
    int k{4};

    cout << canPartitionKSubsets(nums, k) << endl;
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