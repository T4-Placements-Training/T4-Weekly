// Problem Link:
// https://leetcode.com/problems/move-zeroes/

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    if (!n)
        return;

    int slow{}, fast{};

    while (fast < n)
    {
        while (fast < n and nums[fast] == 0)
            fast++;
        if (fast < n)
            swap(nums[slow++], nums[fast++]);
    }
}

void solve()
{
    vector<int> nums{0, 1, 0, 3, 12};

    moveZeroes(nums);
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