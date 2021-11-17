// Problem Link:
// https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/1

// TC: O(n*log(n))
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

class obj
{
public:
    int val, count;

    obj(int _val, int _count) : val(_val), count(_count) {}
};

static bool comparator(obj &o1, obj &o2)
{
    if (o1.count == o2.count)
        return o1.val < o2.val;
    return o1.count > o2.count;
}

vector<int> sortByFreq(int nums[], int n)
{
    vector<obj> arr;
    vector<int> res{};

<<<<<<< HEAD
    == == == =
                 sort(nums, nums + n);

>>>>>>> upstream/Premnaath
    int i = 0;
    while (i < n)
    {
        int temp = i;
        while (i + 1 < n and nums[i] == nums[i + 1])
            i++;

        arr.push_back({nums[i], i - temp + 1});
        i++;
    }

    sort(arr.begin(), arr.end(), comparator);

    for (auto itr : arr)
        if (itr.count != 0)
            for (int i = 0; i < itr.count; ++i)
                res.push_back(itr.val);

    return res;
}

void solve()
{
    int nums[]{5, 5, 4, 6, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    vector<int> res = sortByFreq(nums, n);

    for (int i : res)
        cout << i << " ";
    cout << endl;
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