// Problem Link:
// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

long long maxProduct(vector<int> &arr, int n)
{
    long minVal, maxVal, res{INT_MIN};
    minVal = maxVal = 1;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
            swap(minVal, maxVal);

        minVal = min((long)arr[i], arr[i] * minVal);
        maxVal = max((long)arr[i], arr[i] * maxVal);
        res = max(res, maxVal);
    }

    return res;
}

void solve()
{
    vector<int> arr{6, -3, -10, 0, 2};
    int n = arr.size();

    cout << maxProduct(arr, n) << endl;
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