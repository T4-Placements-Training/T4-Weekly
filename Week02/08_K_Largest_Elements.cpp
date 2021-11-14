// Problem Link:
// https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1

// TC: O(n*log(k))
// SC: O(k)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

vector<int> kLargest(int arr[], int n, int k)
{
    vector<int> res{};
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < k; ++i)
        minHeap.push(arr[i]);

    for (int i = k; i < n; ++i)
    {
        if (arr[i] > minHeap.top())
        {
            minHeap.push(arr[i]);
            minHeap.pop();
        }
    }

    while (!minHeap.empty())
        res.push_back(minHeap.top()), minHeap.pop();

    reverse(res.begin(), res.end());
    return res;
}

void solve()
{
    int arr[]{12, 5, 787, 1, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    vector<int> res = kLargest(arr, n, k);
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