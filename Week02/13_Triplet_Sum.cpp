// Problem Link:
// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

// TC: O(n*log(n))
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool find3Numbers(int nums[], int n, int target)
{
    sort(nums, nums + n);

    for (int k = 0; k < n; ++k)
    {
        int i = k + 1, j = n - 1;
        while (i < j)
        {
            int curr = nums[k] + nums[i] + nums[j];
            if (curr == target)
                return true;
            else if (curr > target)
                j--;
            else
                i++;
        }
    }

    return false;
}

void solve()
{
    int nums[]{1, 4, 45, 6, 10, 8};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 13;

    cout << find3Numbers(nums, n, target) << endl;
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