// Problem Link:
// https://practice.geeksforgeeks.org/problems/string-comparison5858/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int stringComparsion(string s1, string s2)
{
    if (s1 == s2)
        return 0;

    int n1 = s1.size(), n2 = s2.size();
    int i{};
    while (i < n1 and i < n2)
    {
        if (s1[i] == s2[i])
        {
            if (s1[i] == 'n')
            {
                i++;
                if (s1[i] == 'g' and s2[i] != 'g')
                    return 1;
                if (s2[i] == 'g' and s1[i] != 'g')
                    return -1;
            }
            else
                i++;
        }
        else if (s1[i] > s2[i])
            return 1;
        else
            return -1;
    }

    if (i == n1)
        return -1;
    return 1;
}

void solve()
{
    string s1{"adding"};
    string s2{"addio"};

    cout << stringComparsion(s1, s2) << endl;
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