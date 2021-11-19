#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>ans;
        priority_queue<int>topper,dropper;
        for(int i=0;i<k;i++)
        {
            topper.push(nums[i]);
        }
        ans.push_back(topper.top());
        for(int i=k;i<nums.size();i++)
        {
            if(topper.top()==nums[i-k])
            {
                topper.pop();
            }
            else
            {
                dropper.push(nums[i-k]);
            }
            while(!dropper.empty()&&topper.top()==dropper.top())
            {
                topper.pop();
                dropper.pop();
            }
            topper.push(nums[i]);
            ans.push_back(topper.top());
        }
        return ans;
    }