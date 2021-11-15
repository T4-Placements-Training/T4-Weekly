#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

long long merge(long long arr[], long long low, long long mid, long long high)
{
    vector<long long> temp(high - low + 1);

    long long i, j, k, count;
    i = low, j = mid + 1;

    while (i <= mid and j <= high)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            count += mid - i + 1;
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= high)
        temp[k++] = arr[j++];

    k = 0;
    for (long long x = low; x <= high; ++x)
        arr[x] = temp[k++];

    return count;
}

long long mergeSort(long long arr[], long long low, long long high)
{
    if (low >= high)
        return 0;

    long long count=0;
    long long mid = low + (high - low) / 2;

    count += mergeSort(arr, low, mid);
    count += mergeSort(arr, mid + 1, high);
    count += merge(arr, low, mid, high);

    return count;
}

long long inversionCount(long long arr[], long long n)
{
    return mergeSort(arr, 0, n - 1);
}