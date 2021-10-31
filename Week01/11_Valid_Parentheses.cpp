// Problem Link:
// https://leetcode.com/problems/valid-parentheses/

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool isValid(string s)
{
    int n = s.size();
    stack<char> charSt{};
    unordered_map<char, char> hash{};
    hash[')'] = '(';
    hash['}'] = '{';
    hash[']'] = '[';

    for (int i = 0; i < n; ++i)
    {
        if (hash.find(s[i]) == hash.end())
            charSt.push(s[i]);
        else
        {
            if (charSt.empty() or charSt.top() != hash[s[i]])
                return false;
            charSt.pop();
        }
    }

    return charSt.empty();
}

void solve()
{
    string s{"{[]}"};

    isValid(s) == true ? cout << "True\n" : cout << "False\n";
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