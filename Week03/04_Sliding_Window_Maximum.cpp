// Problem Link:
// https://leetcode.com/problems/sliding-window-maximum/

// TC: O(n*log(n))
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> res{};
    int n = nums.size();
    priority_queue<pair<int, int>> maxHeap{};

    for (int i = 0; i < k; ++i)
        maxHeap.push({nums[i], i});
    res.push_back(maxHeap.top().first);

    for (int i = k; i < n; ++i)
    {
        maxHeap.push({nums[i], i});

        while (maxHeap.top().second <= i - k)
            maxHeap.pop();

        res.push_back(maxHeap.top().first);
    }

    return res;
}

void solve()
{
    vector<int> nums{1, 3, -1, -3, 5, 3, 6, 7};
    int k{3};

    auto res = maxSlidingWindow(nums, k);
    for (int i : res)
        cout << i << " ";
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