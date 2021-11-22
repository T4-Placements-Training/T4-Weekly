#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int size1 = nums1.size(), size2 = nums2.size();

    for (int i = 0; i < size1; ++i)
    {
        if (maxHeap.empty() or nums1[i] <= maxHeap.top())
            maxHeap.push(nums1[i]);
        else
            minHeap.push(nums1[i]);

        if (maxHeap.size() > 1 + minHeap.size())
            minHeap.push(maxHeap.top()), maxHeap.pop();
        else if (minHeap.size() > 1 + maxHeap.size())
            maxHeap.push(minHeap.top()), minHeap.pop();
    }

    for (int i = 0; i < size2; ++i)
    {
        if (maxHeap.empty() or nums2[i] <= maxHeap.top())
            maxHeap.push(nums2[i]);
        else
            minHeap.push(nums2[i]);

        if (maxHeap.size() > 1 + minHeap.size())
            minHeap.push(maxHeap.top()), maxHeap.pop();
        else if (minHeap.size() > 1 + maxHeap.size())
            maxHeap.push(minHeap.top()), minHeap.pop();
    }

    if (maxHeap.size() == minHeap.size())
        return (((double)maxHeap.top() + (double)minHeap.top()) / (2.0));
    else if (maxHeap.size() > minHeap.size())
        return (double)maxHeap.top();
    return (double)minHeap.top();
}