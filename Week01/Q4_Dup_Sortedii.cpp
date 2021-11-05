#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

 int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n < 3)
            return n;
         int k = (nums[0] == nums[1])? 2: 1;
        
        for(int i = (nums[0] == nums[1])? 1 : 0, j = i; j < n; j++)
        {
            if(nums[j] > nums[i])
            {
                    k++;
                    i++;
                    nums[i] = nums[j];
                    if((j+1 != n) && (nums[j+1] == nums[i]))
                    {
                        nums[++i] = nums[++j];
                        k++;
                    }
            }
        }
        
        return k;
    }