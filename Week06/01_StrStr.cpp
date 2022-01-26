// Problem Link:
// https://practice.geeksforgeeks.org/problems/implement-strstr/1

// TC: O(|s|*|x|)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool isContained(string s, string x, int index)
{
    for (int i = 0; i < x.size(); ++i)
        if (x[i] != s[index + i])
            return false;
    return true;
}

int strstr(string s, string x)
{
    int m = s.size(), n = x.size();
    if (n > m)
        return -1;

    for (int i = 0; i < m - n; ++i)
    {
        if (isContained(s, x, i))
            return i;
    }

    return -1;
}

void solve()
{
    string s{"GeeksForGeeks"}, x{"For"};

    cout << strstr(s, x) << endl;
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