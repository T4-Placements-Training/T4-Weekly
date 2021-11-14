// Problem Link:
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int maxProfit(vector<int> &prices)
{
    int res{};
    int n = prices.size(), minVal{INT_MAX};

    for (int i = 0; i < n; ++i)
    {
        minVal = min(minVal, prices[i]);
        res = max(res, prices[i] - minVal);
    }

    return res;
}

void solve()
{
    vector<int> prices{7, 1, 5, 3, 6, 4};

    cout << maxProfit(prices) << endl;
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