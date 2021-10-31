// Problem Link:
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    if (!n)
        return 0;

    int slow{1}, fast{1};

    while (fast < n)
    {
        while (fast < n and nums[fast] == nums[fast - 1])
            fast++;
        if (fast >= n)
            break;
        nums[slow] = nums[fast];
        slow++, fast++;
    }

    return slow;
}

void solve()
{
    vector<int> nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int res = removeDuplicates(nums);

    for (int i = 0; i < res; ++i)
        cout << nums[i] << " ";
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