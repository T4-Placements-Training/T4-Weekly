// Problem Link:
// https://practice.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1

// TC: O(26*n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int longestUniqueSubsttr(string &s)
{
    int left{}, right{}, n = s.size(), res{};
    vector<bool> hash(26, false);

    while (right < n)
    {
        if (hash[s[right] - 'a'] == true)
        {
            hash[s[left] - 'a'] = false;
            left++;
        }
        else
        {
            hash[s[right] - 'a'] = true;
            res = max(res, right - left + 1);
            right++;
        }
    }

    return res;
}

void solve()
{
    string s{"geeksforgeeks"};
    cout << longestUniqueSubsttr(s) << endl;
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