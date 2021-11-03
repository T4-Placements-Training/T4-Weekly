#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void reversearr(vector<int>& nums,int start,int end)
    {
        while(start<end)
        {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        if(k==0)
            return;
        k=k%len;
        reversearr(nums,0,len-1);
        reversearr(nums,0,k-1);
        reversearr(nums,k,len-1);
    }



