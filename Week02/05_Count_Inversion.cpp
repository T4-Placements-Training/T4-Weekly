// Problem Link:
// https://practice.geeksforgeeks.org/problems/inversion-of-array/1

// TC: O(n*log(n))
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

ll merge(ll nums[], ll low, ll mid, ll high)
{
    vector<ll> temp(high - low + 1);

    ll i, j, k{}, count{};
    i = low, j = mid + 1;

    while (i <= mid and j <= high)
    {
        if (nums[i] <= nums[j])
            temp[k++] = nums[i++];
        else
        {
            count += mid - i + 1;
            temp[k++] = nums[j++];
        }
    }

    while (i <= mid)
        temp[k++] = nums[i++];
    while (j <= high)
        temp[k++] = nums[j++];

    k = 0;
    for (ll x = low; x <= high; ++x)
        nums[x] = temp[k++];

    return count;
}

ll mergeSort(ll nums[], ll low, ll high)
{
    if (low >= high)
        return 0;

    ll count{};
    ll mid = low + (high - low) / 2;

    count += mergeSort(nums, low, mid);
    count += mergeSort(nums, mid + 1, high);
    count += merge(nums, low, mid, high);

    return count;
}

ll inversionCount(ll nums[], ll n)
{
    return mergeSort(nums, 0, n - 1);
}

void solve()
{
    ll nums[]{2, 4, 1, 3, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << inversionCount(nums, n) << endl;
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