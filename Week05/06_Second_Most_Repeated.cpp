// Problem Link:
// https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1

// TC: O(n*max(|a|, |b|))
// SC: O(n*max(|a|, |b|))

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string secFrequent(string arr[], int n)
{
    int max1{}, max2{};
    string max1String, max2String;
    unordered_map<string, int> hash{};

    for (int i = 0; i < n; ++i)
        hash[arr[i]]++;

    for (auto itr : hash)
    {
        if (itr.second > max1)
        {
            max2String = max1String;
            max1String = itr.first;
            max2 = max1;
            max1 = itr.second;
        }
        else if (itr.second > max2)
        {
            max2String = itr.first;
            max2 = itr.second;
        }
    }

    return max2String;
}

void solve()
{
    string arr[]{"geek", "for", "geek", "for", "geek", "aaa"};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << secFrequent(arr, n) << endl;
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