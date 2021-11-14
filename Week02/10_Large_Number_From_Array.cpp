// Problem Link:
// https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1

// TC: O(n*log(n))
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

static bool comparator(string &s1, string &s2)
{
    return s1 + s2 > s2 + s1;
}

string printLargest(vector<string> &arr)
{
    string res{};
    sort(arr.begin(), arr.end(), comparator);

    for (string s : arr)
        res.append(s);

    return res;
}

void solve()
{
    vector<string> arr{"3", "30", "34", "5", "9"};

    cout << printLargest(arr) << endl;
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