// Problem Link:
// https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1

// TC: O(n)
// SC: O(26)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

char nonrepeatingCharacter(string s)
{
    vector<int> hash(26, 0);
    for (char c : s)
        hash[c - 'a']++;

    unordered_set<char> nonRepeats{};
    for (int i = 0; i < 26; ++i)
        if (hash[i] == 1)
            nonRepeats.insert('a' + i);

    for (char c : s)
        if (nonRepeats.find(c) != nonRepeats.end())
            return c;

    return '$';
}

void solve()
{
    string s{"hello"};
    cout << nonrepeatingCharacter(s) << endl;
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