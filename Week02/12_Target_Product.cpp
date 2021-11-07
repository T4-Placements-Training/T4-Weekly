// Problem Link:
// https://practice.geeksforgeeks.org/problems/equal-to-product3836/1

// TC: O(n*log(n))
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool isProduct(int arr[], int n, ll target)
{
    if (n < 2)
        return false;

    unordered_set<ll> hash{};
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == target)
            return true;
        hash.insert(arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] and target % arr[i] == 0)
            if (hash.find(target / arr[i]) != hash.end())
                return true;
    }

    return false;
}

void solve()
{
    int arr[]{10, 20, 9, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    ll target = 400;

    cout << isProduct(arr, n, target) << endl;
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