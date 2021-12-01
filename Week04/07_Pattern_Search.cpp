// Problem Link:
// https://practice.geeksforgeeks.org/problems/pattern-searching5231/1

// TC: O(n^2)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool searchPattern(string &p, string &s)
{
    int n1 = p.size();
    int n2 = s.size();

    for (int i = 0; i < n1; ++i)
    {
        int k = i;
        bool flag = true;

        for (int j = 0; j < n2; ++j)
        {
            if (k >= n1 or p[k] != s[j])
            {
                flag = false;
                break;
            }
            k++;
        }

        if (flag)
            return true;
    }

    return false;
}

void solve()
{
    string p{"abcdefh"};
    string s{"bcd"};

    cout << searchPattern(p, s) << endl;
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