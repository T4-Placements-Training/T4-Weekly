// Problem Link:
// https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

vector<ll> productExceptSelf(vector<ll> &nums, int n)
{
    int zeroCount{};
    ll pdt{1}, zeroIndex{-1};
    vector<ll> res(n);

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] != 0)
            pdt *= nums[i];
        else
            zeroIndex = i, zeroCount++;
    }

    if (zeroCount >= 2)
        return res;
    else if (zeroCount == 1)
    {
        res[zeroIndex] = pdt;
        return res;
    }

    for (int i = 0; i < n; ++i)
        res[i] = pdt / nums[i];
    return res;
}

void solve()
{
    vector<ll> nums{10, 3, 5, 6, 2};
    int n = nums.size();

    vector<ll> res = productExceptSelf(nums, n);
    for (ll i : res)
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