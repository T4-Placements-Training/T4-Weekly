// Problem Link:
// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1

// TC: O(n*(m*log(m)))
// SC: O(max(m))

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string getKey(string &s)
{
    string temp(s.begin(), s.end());
    sort(temp.begin(), temp.end());
    return temp;
}

vector<vector<string>> Anagrams(vector<string> &stringList)
{
    vector<vector<string>> res{};
    unordered_map<string, vector<string>> hash{};

    for (string s : stringList)
        hash[getKey(s)].push_back(s);

    for (auto itr : hash)
        res.push_back(itr.second);

    return res;
}

void solve()
{
    vector<string> stringList{"act", "god", "cat", "dog", "tac"};
    vector<vector<string>> res = Anagrams(stringList);

    for (vector<string> curr : res)
    {
        for (string s : curr)
            cout << s << " ";
        cout << endl;
    }
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