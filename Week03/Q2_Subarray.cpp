#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>ans;
        long long curr_sum=arr[0];
        long long start=0;
        for(long i=1;i<n;i++)
        {
            if(curr_sum>s && start<i-1)
            {
                curr_sum=curr_sum-arr[start];
                start++;
            }
            if(curr_sum==s)
            {
                ans.push_back(start+1);
                ans.push_back(i);
                return ans;
            }
            if(i<n)
            curr_sum+=arr[i];
        }
        return ans;
    }