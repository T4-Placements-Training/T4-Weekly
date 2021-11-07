// Problem Link:
// https://leetcode.com/problems/median-of-two-sorted-arrays/

// TC: O(log(m+n))
// SC: O(m+n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int m = nums1.size(), n = nums2.size();

    for (int i = 0; i < m; ++i)
    {
        if (maxHeap.empty() or nums1[i] <= maxHeap.top())
            maxHeap.push(nums1[i]);
        else
            minHeap.push(nums1[i]);

        if (maxHeap.size() > 1 + minHeap.size())
            minHeap.push(maxHeap.top()), maxHeap.pop();
        else if (minHeap.size() > 1 + maxHeap.size())
            maxHeap.push(minHeap.top()), minHeap.pop();
    }

    for (int i = 0; i < n; ++i)
    {
        if (maxHeap.empty() or nums2[i] <= maxHeap.top())
            maxHeap.push(nums2[i]);
        else
            minHeap.push(nums2[i]);

        if (maxHeap.size() > 1 + minHeap.size())
            minHeap.push(maxHeap.top()), maxHeap.pop();
        else if (minHeap.size() > 1 + maxHeap.size())
            maxHeap.push(minHeap.top()), minHeap.pop();
    }

    if (maxHeap.size() == minHeap.size())
        return (((double)maxHeap.top() + (double)minHeap.top()) / (2.0));
    else if (maxHeap.size() > minHeap.size())
        return maxHeap.top();
    return minHeap.top();
}

void solve()
{
    vector<int> nums1{1, 3};
    vector<int> nums2{2};

    int res = findMedianSortedArrays(nums1, nums2);
    cout << res << endl;
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