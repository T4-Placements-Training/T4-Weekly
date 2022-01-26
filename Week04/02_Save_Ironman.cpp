// Problem Link:
// https://practice.geeksforgeeks.org/problems/save-ironman0227/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool isAlphaNumeric(char c)
{
    if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') or (c >= '0' and c <= '9'))
        return true;
    return false;
}

bool isPalindrome(string s, int i, int j)
{
    while (i < j)
        if (s[i++] != s[j--])
            return false;

    return true;
}

bool saveIronman(string s)
{
    int i{}, j{}, n = s.size();

    while (i < n and j < n)
    {
        while (j < n and !isAlphaNumeric(s[j]))
            j++;
        s[i++] = tolower(s[j++]);
    }

    return isPalindrome(s, 0, i - 1);
}

void solve()
{
    string s{"I am :IronnorI Ma, i"};

    cout << saveIronman(s) << endl;
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