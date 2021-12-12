// Problem Link:
// https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string printMinNumberForPattern(string &s)
{
    string res{};
    int n = s.size();

    for (int i = 0; i <= n; ++i)
        res.push_back('0' + (i + 1));

    int i{};
    while (i < n)
    {
        while (i < n and s[i] == 'I')
            i++;

        int count{};
        while (i < n and s[i] == 'D')
            count++, i++;

        int temp = i - count;
        reverse(res.begin() + temp, res.begin() + i + 1);
    }

    return res;
}

void solve()
{
    string s{"IIDDD"};

    cout << printMinNumberForPattern(s) << endl;
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