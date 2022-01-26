// Problem Link:
// https://practice.geeksforgeeks.org/problems/implement-atoi/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int atoi(string s)
{
    int n = s.size(), sign{1};
    int i{}, j = n - 1;
    if (n > 0 and s[i] == '-')
        i++, sign = -1;

    while (i < j)
    {
        if (!isdigit(s[i]) or !isdigit(s[j]))
            return -1;
        swap(s[i++], s[j--]);
    }

    int res{}, d{1};
    i = sign == -1 ? 1 : 0;

    while (i < n)
    {
        res += d * (s[i] - '0');
        i++, d *= 10;
    }

    return sign * res;
}

void solve()
{
    string s{"123"};
    cout << atoi(s) << endl;
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