#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

 int pivotIndex(vector<int>& nums) {
        int sum=0;
        int rsum,leftsum=0;
        int n=nums.size();
        auto it=accumulate(nums.begin(),nums.end(),0);
        sum=it;
        rsum=sum;
        for(int i=0;i<n;i++)
        {
            rsum=rsum-nums[i];
            if(rsum==leftsum)
                return i;
            leftsum+=nums[i];
        }
        return -1;
    }