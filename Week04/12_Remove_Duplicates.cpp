// Problem Link:
// https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1

// TC: O(n)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string removeDuplicates(string s)
{
    unordered_set<char> hash{};
    string res{};

    for (char c : s)
    {
        if (hash.find(c) == hash.end())
        {
            res.push_back(c);
            hash.insert(c);
        }
    }

    return res;
}

void solve()
{
    string s{"geeksforgeeks"};

    cout << removeDuplicates(s) << endl;
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