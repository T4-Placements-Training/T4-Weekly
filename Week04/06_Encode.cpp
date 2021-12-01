// Problem Link:
// https://practice.geeksforgeeks.org/problems/run-length-encoding/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string encode(string s)
{
    string res{};
    int n = s.size(), i{};

    while (i < n)
    {
        char c = s[i];
        int count{1};
        i++;

        while (i < n and s[i] == c)
            count++, i++;

        res.push_back(c);
        res.append(to_string(count));
    }

    return res;
}

void solve()
{
    string s{"aaaabbbccc"};

    cout << encode(s) << endl;
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