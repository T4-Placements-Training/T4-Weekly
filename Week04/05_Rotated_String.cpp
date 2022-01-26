// Problem Link:
// https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool helper(string s1, string s2)
{
    int n1 = s1.size(), n2 = s2.size();

    int i{}, j{n2 - 2};
    while (i < n1)
    {
        if (s1[i] != s2[j % n2])
            return false;
        i++, j++;
    }

    return true;
}

bool isRotated(string s1, string s2)
{
    int n1 = s1.size(), n2 = s2.size();
    if (n1 != n2 or n1 == 1)
        return false;

    if (s1[0] == s2[n2 - 2] and s1[1] == s2[n2 - 1])
        return helper(s1, s2);
    else if (s1[n1 - 2] == s2[0] and s1[n1 - 1] == s2[1])
        return helper(s2, s1);
    return false;
}

void solve()
{
    string s1{"amazon"}, s2{"azonam"};

    cout << isRotated(s1, s2) << endl;
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