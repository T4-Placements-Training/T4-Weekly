// Problem Link:
// https://practice.geeksforgeeks.org/problems/two-numbers-with-sum-closest-to-zero1737/1

// TC: O(n*log(n))
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int closestToZero(int nums[], int n)
{
    sort(nums, nums + n);

    // Case 1
    if (n == 1)
        return 2 * nums[0];

    // Case 2
    if (nums[n - 1] <= 0)
        return nums[n - 1] + nums[n - 2];

    // Case 3
    if (nums[0] >= 0)
        return nums[0] + nums[1];

    // Case 4
    int low{}, high{n - 1}, res{INT_MAX};
    while (low < high)
    {
        int curr = nums[low] + nums[high];

        if (curr == 0)
            return 0;
        else if (curr < 0)
            low++;
        else
            high--;

        if (abs(curr) < abs(res))
            res = curr;
        else if (abs(curr) == abs(res))
            res = max(res, curr);
    }

    return res;
}

void solve()
{
    int nums[]{-21, -67, -37, -18, 4, -65};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << closestToZero(nums, n) << endl;
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