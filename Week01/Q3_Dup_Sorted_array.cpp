#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

 int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) 
		return 0;
        
	    int index = 0;
	    for(int i = 1; i < nums.size(); i++)
	    {
		    if(nums[i - 1] != nums[i])
			   nums[++index] = nums[i];
	    }
	    return ++index;
    }