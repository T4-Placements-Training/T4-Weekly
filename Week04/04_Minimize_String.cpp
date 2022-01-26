// Problem Link:
// https://practice.geeksforgeeks.org/problems/minimize-string-value1010/1

// TC: O(n)
// SC: O(1)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int minValue(string s, int k)
{
    priority_queue<int> maxHeap;
    vector<int> hash(26, 0);

    for (char c : s)
        hash[c - 'a']++;

    for (int freq : hash)
        if (freq)
            maxHeap.push(freq);

    while (k)
    {
        int temp = maxHeap.top();
        if (temp == 0)
            return 0;
        temp--;
        maxHeap.pop();
        maxHeap.push(temp);

        k--;
    }

    int res{};
    while (maxHeap.empty() == false)
        res += pow(maxHeap.top(), 2), maxHeap.pop();

    return res;
}

void solve()
{
    string s{"abccc"};
    int k{1};

    cout << minValue(s, k) << endl;
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