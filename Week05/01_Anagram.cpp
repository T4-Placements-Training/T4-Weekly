// Problem Link:
// https://practice.geeksforgeeks.org/problems/anagram-1587115620/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool isAnagram(string a, string b)
{
    unordered_map<char, int> hash{};

    for (char c : a)
        hash[c]++;

    for (char c : b)
        hash[c]--;

    for (auto itr : hash)
        if (itr.second != 0)
            return false;
    return true;
}

void solve()
{
    string s1{};
    string s2{};

    cout << isAnagram(s1, s2) << endl;
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