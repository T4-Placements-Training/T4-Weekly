// Problem Link:
// https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int majorityElement(int nums[], int n)
{
    int count{}, major{};

    for (int i = 0; i < n; ++i)
    {
        if (major == nums[i])
            count++;
        else if (count == 0)
            major = nums[i], count = 1;
        else
            count--;
    }

    int check{};
    for (int i = 0; i < n; ++i)
        if (nums[i] == major)
            check++;

    if (check > n / 2)
        return major;
    return -1;
}

void solve()
{
    int nums[]{3, 1, 3, 3, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << majorityElement(nums, n) << endl;
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