// Problem Link:
// https://practice.geeksforgeeks.org/problems/min-manipulations-to-make-strings-anagram1421/1

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int minManipulation(int n, string s1, string s2)
{
    unordered_map<char, int> hash{};

    for (char c : s1)
        hash[c]++;
    for (char c : s2)
        hash[c]--;

    int res{};
    for (auto itr : hash)
        res += abs(itr.second);

    return res / 2;
}

void solve()
{
    string s1{"hq"}, s2{"gh"};

    cout << minManipulation(s1.size(), s1, s2) << endl;
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