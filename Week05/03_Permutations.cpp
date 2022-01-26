// Problem Link:
// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

// TC: O(n*n!)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

void helper(string &s, int index, vector<string> &res)
{
    int n = s.size();
    if (index == n)
    {
        res.push_back(s);
        return;
    }

    for (int i = index; i < n; ++i)
    {
        swap(s[index], s[i]);
        helper(s, index + 1, res);
        swap(s[index], s[i]);
    }
}

vector<string> find_permutation(string s)
{
    vector<string> res{};

    helper(s, 0, res);
    sort(res.begin(), res.end());
    return res;
}

void solve()
{
    string s{"ABC"};

    vector<string> res = find_permutation(s);
    for (string s : res)
        cout << s << " ";
    cout << endl;
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