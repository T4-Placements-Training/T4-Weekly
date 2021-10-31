// Problem Link:
// https://leetcode.com/problems/missing-number/

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int res{n};

    for (int i = 0; i < n; ++i)
        res ^= i, res ^= nums[i];

    return res;
}

void solve()
{
    vector<int> nums{3, 0, 1};

    cout << missingNumber(nums) << endl;
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