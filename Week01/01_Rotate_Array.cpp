// Problem Link:
// https://leetcode.com/problems/rotate-array/

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

void reverse(vector<int> &nums, int start, int end)
{
    while (start < end)
        swap(nums[start++], nums[end--]);
}

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k %= n;

    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}

void solve()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7};
    int k{3};

    rotate(nums, k);

    for (int i : nums)
        cout << i << " ";
    cout << endl;
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