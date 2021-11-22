// Problem Link:
// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

vector<int> subarraySum(int arr[], int n, long target)
{
    long sum{arr[0]};
    int low{}, high{};

    while (low < n and high < n)
    {
        if (sum == target)
            return {low + 1, high + 1};
        if (sum < target)
            sum += arr[++high];
        else
            sum -= arr[--high];
    }

    return {-1};
}

void solve()
{
    int arr[]{1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    long target{12};

    vector<int> res = subarraySum(arr, n, target);
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