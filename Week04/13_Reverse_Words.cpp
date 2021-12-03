// Problem Link:
// https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string reverseWords(string s)
{
    int i{}, n = s.size();
    string res{};

    while (i < n)
    {
        string curr{};
        while (i < n and s[i] != '.')
            curr.push_back(s[i++]);

        reverse(curr.begin(), curr.end());
        res.append(curr);
        while (i < n and s[i] == '.')
            res.push_back(s[i++]);
    }

    return res;
}

void solve()
{
    string s{"i.like"};

    cout << reverseWords(s) << endl;
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