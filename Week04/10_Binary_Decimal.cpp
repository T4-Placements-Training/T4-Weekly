// Problem Link:
// https://practice.geeksforgeeks.org/problems/find-k-th-character-in-string3841/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string decimalToBinary(int m)
{
    string res{};

    while (m)
    {
        if (m % 2 == 0)
            res.push_back('0');
        else
            res.push_back('1');
        m /= 2;
    }

    reverse(res.begin(), res.end());
    return res;
}

string refactor(string s)
{
    string res{};

    for (char c : s)
        if (c == '0')
            res.append("01");
        else
            res.append("10");

    return res;
}

char kthCharacter(int m, int n, int k)
{
    string s{};
    if (m == 0)
        s = "0";
    else
        s = decimalToBinary(m);

    while (n--)
        s = refactor(s);

    return s[k - 1];
}

void solve()
{
    int m{5}, n{2}, k{5};

    cout << kthCharacter(m, n, k) << endl;
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