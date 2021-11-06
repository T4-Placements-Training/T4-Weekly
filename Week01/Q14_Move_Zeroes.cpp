#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

 void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>copy;
        int c=count(nums.begin(),nums.end(),0);
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                continue;
            copy.push_back(nums[i]);
        }
        while(c>0)
        {
            copy.push_back(0);
            c--;
        }
        nums=copy;
    }