// Problem Link:
// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string reverseWords(string s)
{
    string res{};
    vector<string> temp;
    int i{}, n = s.size();

    while (i < n)
    {
        string curr{};
        while (i < n and s[i] != '.')
        {
            curr.push_back(s[i]);
            i++;
        }

        if (curr.size() != 0)
            temp.push_back(curr);
        i++;
    }

    for (int i = temp.size() - 1; i >= 0; --i)
        res.append(temp[i]), res.push_back('.');

    res.pop_back();
    return res;
}

void solve()
{
    string s{"i.like.this.program.very.much"};

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