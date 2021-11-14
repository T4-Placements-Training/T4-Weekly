// Problem Link:
// https://practice.geeksforgeeks.org/problems/pythagorean-triplet3018/1

// TC: O(n^2)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool checkTriplet(int arr[], int n)
{
    vector<int> hash;
    for (int i = 0; i < n; ++i)
        hash.push_back(pow(arr[i], 2));
    sort(hash.begin(), hash.end());

    for (int i = n - 1; i >= 0; --i)
    {
        int low = 0, high = i - 1;
        while (low < high)
        {
            if (hash[i] == hash[low] + hash[high])
                return true;
            else if (hash[i] > hash[low] + hash[high])
                low++;
            else
                high--;
        }
    }

    return false;
}

void solve()
{
    int arr[]{3, 2, 4, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << checkTriplet(arr, n) << endl;
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