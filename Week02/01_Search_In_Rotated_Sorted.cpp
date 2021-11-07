// Problem Link:
// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1

// TC: O(log(n))
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int search(int nums[], int l, int h, int key)
{

    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (nums[mid] == key)
            return mid;
        else if (nums[l] <= nums[mid])
        {
            if (key >= nums[l] and key < nums[mid])
                h = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (key > nums[mid] and key <= nums[h])
                l = mid + 1;
            else
                h = mid - 1;
        }
    }

    return -1;
}

void solve()
{
    int nums[]{5, 6, 7, 8, 9, 10, 1, 2, 3};
    int l = 0, h = sizeof(nums) / sizeof(nums[0]) - 1;
    int key = 10;

    cout << search(nums, l, h, key) << endl;
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