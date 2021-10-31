// Problem Link:
// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

// TC: O(n*log(k))
// SC: O(k)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int> maxHeap{};

    for (int i = l; i < k; ++i)
        maxHeap.push(arr[i]);

    for (int i = k; i <= r; ++i)
    {
        if (arr[i] < maxHeap.top())
        {
            maxHeap.push(arr[i]);
            maxHeap.pop();
        }
    }

    return maxHeap.top();
}

void solve()
{
    int arr[]{7, 10, 4, 3, 20, 15};
    int l = 0, r = (sizeof(arr) / sizeof(arr[0])) - 1, k = 3;

    cout << kthSmallest(arr, l, r, k) << endl;
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