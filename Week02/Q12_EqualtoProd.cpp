#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <unordered_set>
#include <utility>

using namespace std;

bool isProduct(int arr[], int n, long long x) {
        if(n<2)
        return false;
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                if(x==0)
                return true;
                else
                continue;
            }
            if(x%arr[i]==0)
            {
                if(s.find(x/arr[i])!=s.end())
                return true;
                
                s.insert(arr[i]);
            }
        }
        return false;
    }