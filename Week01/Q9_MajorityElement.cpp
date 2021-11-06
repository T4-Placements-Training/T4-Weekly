#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int majorityElement(int a[], int size)
    {
        
        // your code here
        int c=0;
        unordered_map <int,int> mp;
        for(int i=0;i<size;i++)
        mp[a[i]]++;
        for(auto &it:mp)
        {
            if(it.second>(size/2))
            {
                c=1;
                return it.first;
            }
        }
        if(c==0)
        return -1;
        
    }