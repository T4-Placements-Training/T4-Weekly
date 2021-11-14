// Problem Link:
// https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1

// TC: O(n*log(m))
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

bool binarySearch(int nums[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return true;
        else if (nums[mid] < target)
            low++;
        else
            high--;
    }

    return false;
}

vector<pair<int, int>> allPairs(int A[], int B[], int m, int n, int target)
{
    vector<pair<int, int>> res{};
    sort(A, A + m);
    sort(B, B + n);

    for (int i = 0; i < m; ++i)
    {
        bool search = binarySearch(B, n, target - A[i]);
        if (search == true)
            res.push_back({A[i], target - A[i]});
    }

    return res;
}

void solve()
{
    int A[]{1, 2, 4, 5, 7};
    int B[]{5, 6, 3, 4, 8};
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);
    int target = 9;

    vector<pair<int, int>> res = allPairs(A, B, m, n, target);
    for (auto itr : res)
        cout << itr.first << " " << itr.second << endl;
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