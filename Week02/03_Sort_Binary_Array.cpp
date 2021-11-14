// Problem Link:
// https://practice.geeksforgeeks.org/problems/binary-array-sorting/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

void binSort(int nums[], int n)
{
    int low = 0, high = n - 1;

    while (low < high)
    {
        while (low < high and nums[low] == 0)
            low++;
        while (low < high and nums[high] == 1)
            high--;
        if (low < high)
            swap(nums[low], nums[high]);
    }
}

void solve()
{
    int nums[]{1, 0, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);

    binSort(nums, n);
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