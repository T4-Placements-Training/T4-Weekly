// Problem Link:
// https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int longestSubstrDistinctChars(string s)
{
    unordered_set<char> hash{};
    int res{}, n = s.size();
    int left{}, right{};

    while (left < n and right < n)
    {
        if (hash.find(s[right]) != hash.end())
        {
            hash.erase(s[left]);
            left++;
        }
        else
        {
            hash.insert(s[right]);
            res = max(res, right - left + 1);
            right++;
        }
    }

    return res;
}

void solve()
{
    string s{"geeksforgeeks"};

    cout << longestSubstrDistinctChars(s) << endl;
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