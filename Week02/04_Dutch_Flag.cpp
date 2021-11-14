// Problem Link:
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

void sort012(int nums[], int n)
{
    int low = 0, high = n - 1, mid = 0;

    while (mid <= high)
    {
        if (nums[mid] == 0)
            swap(nums[mid++], nums[low++]);
        else if (nums[mid] == 1)
            mid++;
        else
            swap(nums[high--], nums[mid]);
    }
}

void solve()
{
    int nums[]{0, 2, 1, 2, 0};
    int n = sizeof(nums) / sizeof(nums[0]);

    sort012(nums, n);

    for (int i = 0; i < n; ++i)
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