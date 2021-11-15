#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprice=INT_MAX;
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<minprice)
                minprice=prices[i];
            else if(prices[i]-minprice>max)
                max=prices[i]-minprice;
        }
        return max;
        
    }