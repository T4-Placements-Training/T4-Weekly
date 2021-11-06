#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int missingNumber(vector<int>& nums) {
        int n= nums.size();
        auto sum=accumulate(nums.begin(),nums.end(),0);
        int tot=(n*(n+1))/2;
        return tot-sum;
    }