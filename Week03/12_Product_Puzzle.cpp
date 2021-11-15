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
    vector<ll> res(n);
    int count{};

    for (int i : nums)
        if (i == 0)
            count++;

    if (count >= 2)
        return res;

    if (count == 1)
    {
        ll pdt{1};
        int index{};
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] != 0)
                pdt *= nums[i];
            else
                index = i;
        }

        res[index] = pdt;
        return res;
    }

    ll pdt{1};
    for (int i = 0; i < n; ++i)
        pdt *= nums[i];

    for (int i = 0; i < n; ++i)
        res[i] = pdt / nums[i];
    return res;
}

void solve()
{
    int n;
    cin >> n;
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