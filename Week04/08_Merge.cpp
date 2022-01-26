// Problem Link:
// https://practice.geeksforgeeks.org/problems/merge-two-strings2736/1

// TC: O(n+m)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string merge(string s1, string s2)
{
    int i{}, j{}, n1 = s1.size(), n2 = s2.size();
    string res{};

    while (i < n1 or j < n2)
    {
        if (i < n1)
            res.push_back(s1[i++]);
        if (j < n2)
            res.push_back(s2[j++]);
    }

    return res;
}

void solve()
{
    string s1{"Hello"}, s2{"Bye"};

    cout << merge(s1, s2) << endl;
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