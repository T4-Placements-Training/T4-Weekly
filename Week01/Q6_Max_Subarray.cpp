#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_sofar=INT_MIN,max_ending=0;
        for(int i=0;i<n;i++)
        {
            max_ending=max_ending + nums[i];
            if(max_sofar<max_ending)
                max_sofar=max_ending;
            if(max_ending<0)
                max_ending=0;
        }
        return max_sofar;
    }