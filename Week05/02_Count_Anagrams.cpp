// Problem Link:
// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int search(string pat, string txt)
{
    int res{}, n = pat.size();
    vector<int> patHash(26, 0);
    vector<int> txtHash(26, 0);

    for (char c : pat)
        patHash[c - 'a']++;

    for (int i = 0; i < pat.size(); ++i)
        txtHash[txt[i] - 'a']++;

    if (patHash == txtHash)
        res++;

    for (int i = n; i < txt.size(); ++i)
    {
        txtHash[txt[i] - 'a']++;
        txtHash[txt[i - n] - 'a']--;

        if (patHash == txtHash)
            res++;
    }

    return res;
}

void solve()
{
    string pat{"aaba"};
    string txt{"aabaabaa"};

    cout << search(pat, txt) << endl;
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