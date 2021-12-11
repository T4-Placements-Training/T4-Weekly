// Problem Link:
// https://practice.geeksforgeeks.org/problems/smallest-distant-window3132/1

// TC: O(256*n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string findSubString(string &s)
{
    int minLen{INT_MAX}, n = s.size(), resStart{};

    unordered_set<char> hash1(s.begin(), s.end());
    unordered_map<char, int> hash2;

    int left{}, right{};
    while (left <= right and right <= n)
    {
        if (hash1.size() == hash2.size())
        {
            if (minLen > right - left)
                minLen = right - left, resStart = left;

            if (hash2[s[left]] == 1)
                hash2.erase(s[left]);
            else
                hash2[s[left]]--;
            left++;
        }
        else
        {
            if (right < n)
                hash2[s[right]]++;
            right++;
        }
    }

    return s.substr(resStart, minLen);
}

void solve()
{
    string s{"AABBBCBBAC"};

    cout << findSubString(s) << endl;
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