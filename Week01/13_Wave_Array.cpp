// Problem Link:
// https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

void convertToWave(vector<int> &arr, int n)
{
    for (int i = 0; i + 1 < n; i += 2)
        swap(arr[i], arr[i + 1]);
}

void solve()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int n = arr.size();

    convertToWave(arr, n);

    for (int i : arr)
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