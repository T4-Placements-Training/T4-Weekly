// Problem Link:
// https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int lps(string s)
{
    int n = s.size(), right{1}, left{};
    vector<int> lps(n, 0);

    while (right < n)
    {
        if (s[left] == s[right])
        {
            lps[right] = left + 1;
            left++, right++;
        }
        else
        {
            if (left == 0)
                right++;
            else
                left = lps[left - 1];
        }
    }

    return left;
}

void solve()
{
    string s{"abab"};
    cout << lps(s) << endl;
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