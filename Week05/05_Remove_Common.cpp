// Problem Link:
// https://practice.geeksforgeeks.org/problems/remove-common-characters-and-concatenate-1587115621/1

// TC: O(a*log(a) + b*log(b))
// SC: O(|a|+|b|)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string concatenatedString(string a, string b)
{
    string res{};
    vector<int> hash1(26, 0);
    vector<int> hash2(26, 0);
    unordered_set<char> repeats{};

    for (char c : a)
        hash1[c - 'a']++;

    for (char c : b)
        hash2[c - 'a']++;

    for (int i = 0; i < 26; ++i)
        if (hash1[i] != 0 and hash2[i] != 0)
            repeats.insert('a' + i);

    for (char c : a)
        if (repeats.find(c) == repeats.end())
            res.push_back(c);

    for (char c : b)
        if (repeats.find(c) == repeats.end())
            res.push_back(c);

    if (res.size() == 0)
        return "-1";
    return res;
}

void solve()
{
    string a{"aacdb"}, b{"gafd"};

    cout << concatenatedString(a, b) << endl;
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