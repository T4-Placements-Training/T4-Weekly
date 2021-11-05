#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp{};
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
                return {mp[target-nums[i]],i};
            mp[nums[i]]=i;
        }
        return {};
    }