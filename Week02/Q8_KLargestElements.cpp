#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

vector<int> kLargest(int arr[], int n, int k)
    {
        vector<int>ans;
        sort(arr,arr+n,greater<int>());
        for(int i=0;i<k;i++)
        ans.push_back(arr[i]);
        return ans;
        
    }