// Problem Link:
// https://leetcode.com/problems/remove-element/

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    if (!n)
        return 0;

    int slow{}, fast{};

    while (fast < n)
    {
        if (nums[slow] == val)
        {
            while (fast < n and nums[fast] == val)
                fast++;
            if (fast < n)
                swap(nums[fast], nums[slow]);
            else
                break;
        }
        slow++, fast++;
    }

    return slow;
}

void solve()
{
    vector<int> nums{3, 2, 2, 3};
    int val{3};
    int res = removeElement(nums, val);

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