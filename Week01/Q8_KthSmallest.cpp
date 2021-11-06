#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> maxi{};
        for(int i=l;i<k;i++)
        {
            maxi.push(arr[i]);
        }
        for(int i=k;i<=r;i++)
        {
            if(arr[i]<maxi.top())
            {
                maxi.push(arr[i]);
                maxi.pop();
            }
        }
        return maxi.top();
    }