// Problem Link:
// https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1

// TC: O(1)
// SC: O(n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

class twoStacks
{
    int *arr;
    int size;
    int top1, top2;

public:
    twoStacks(int n = 100)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();
};

void twoStacks ::push1(int x)
{
    arr[++top1] = x;
}

void twoStacks ::push2(int x)
{
    arr[--top2] = x;
}

int twoStacks ::pop1()
{
    if (top1 == -1)
        return -1;
    return arr[top1--];
}

int twoStacks ::pop2()
{
    if (top2 == this->size)
        return -1;
    return arr[top2++];
}

void solve()
{
    twoStacks numSt;
    numSt.push1(2);
    numSt.push1(3);
    numSt.push2(4);

    cout << numSt.pop1() << endl;
    cout << numSt.pop2() << endl;
    cout << numSt.pop2() << endl;
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