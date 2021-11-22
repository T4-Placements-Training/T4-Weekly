// Problem Link:
// https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1

// TC: O(n^3)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> res{};
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; ++i)
    {
        if (i != 0 and nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n - 2; ++j)
        {
            if (j != i + 1 and nums[j] == nums[j - 1])
                continue;

            int low{j + 1}, high{n - 1}, currTarget{target - nums[i] - nums[j]};
            while (low < high)
            {
                if (nums[low] + nums[high] == currTarget)
                {
                    res.push_back({nums[i], nums[j], nums[low], nums[high]});
                    low++, high--;
                    while (low < high and nums[low] == nums[low - 1])
                        low++;
                    while (low < high and nums[high] == nums[high + 1])
                        high--;
                }
                else if (nums[low] + nums[high] < currTarget)
                    low++;
                else
                    high--;
            }
        }
    }

    return res;
}

void solve()
{
    vector<int> nums{10, 2, 3, 4, 5, 7, 8};
    int target{23};

    auto res = fourSum(nums, target);
    for (auto vec : res)
    {
        for (int i : vec)
            cout << i << " ";
        cout << endl;
    }
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