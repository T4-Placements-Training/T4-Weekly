// Problem Link:
// https://leetcode.com/problems/two-sum/

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> hash{};

    for (int i = 0; i < n; ++i)
    {
        if (hash.find(target - nums[i]) != hash.end())
            return {hash[target - nums[i]], i};
        hash[nums[i]] = i;
    }

    return {};
}

void solve()
{
    vector<int> nums{2, 7, 11, 15};
    int target{9};

    vector<int> res = twoSum(nums, target);
    cout << res[0] << " " << res[1] << endl;
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