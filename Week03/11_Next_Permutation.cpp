// Problem Link:
// https://practice.geeksforgeeks.org/problems/next-permutation5226/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

vector<int> nextPermutation(int n, vector<int> nums)
{
    int index{-1};

    for (int i = n - 1; i > 0; --i)
        if (nums[i] > nums[i - 1])
        {
            index = i - 1;
            break;
        }

    if (index != -1)
    {
        for (int i = n - 1; i >= 0; --i)
            if (nums[i] > nums[index])
            {
                swap(nums[i], nums[index]);
                break;
            }
    }

    int i = index + 1, j = n - 1;
    while (i < j)
        swap(nums[i++], nums[j--]);

    return nums;
}

void solve()
{
    int n;
    cin >> n;
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