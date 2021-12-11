// Problem Link:
// https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool isContained(vector<int> &hash1, vector<int> &hash2)
{
    for (int i = 0; i < 26; ++i)
        if (hash1[i] and hash1[i] > hash2[i])
            return false;

    return true;
}

string smallestWindow(string s, string p)
{
    vector<int> hash1(26, 0);
    vector<int> hash2(26, 0);
    int n = p.size(), m = s.size();

    string resString{"-1"};
    int resStart{}, resLen{INT_MAX};

    for (int i = 0; i < n; ++i)
        hash1[p[i] - 'a']++;

    int left{}, right{};
    while (right <= m)
    {
        if (isContained(hash1, hash2))
        {
            if (right - left < resLen)
            {
                resLen = right - left;
                resStart = left;
            }
            hash2[s[left] - 'a']--;
            left++;
        }
        else
        {
            if (right < m)
                hash2[s[right] - 'a']++;
            right++;
        }
    }

    if (resLen == INT_MAX)
        return "-1";
    return s.substr(resStart, resLen);
}

void solve()
{
    string s{"zoomlazapzo"}, p{"oza"};

    cout << smallestWindow(s, p) << endl;
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