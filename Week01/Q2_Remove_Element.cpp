#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int removeElement(vector<int>& nums, int val) {
        int c=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=val)
            {
                nums[c]=nums[j];
                c++;
            }
        }
        return c;
    }