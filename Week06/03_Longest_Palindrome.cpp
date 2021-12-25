// Problem Link:
// https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1

// TC: O(n*k)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

void expand(string &s, int i, int j, int &left, int &right)
{
    int n = s.size();

    while (i >= 0 and j < n and s[i] == s[j])
        i--, j++;

    i++, j--;
    if (right - left < j - i)
        right = j, left = i;
}

string longestPalin(string s)
{
    int n = s.size(), left{}, right{};

    for (int i = 0; i < n; ++i)
    {
        expand(s, i, i + 1, left, right);
        expand(s, i, i, left, right);
    }

    return s.substr(left, right - left + 1);
}

void solve()
{
    string s{"aaaabbaa"};
    cout << longestPalin(s) << endl;
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