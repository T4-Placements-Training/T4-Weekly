#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        vector<int>maxfromend(n+1,INT_MIN);
        for(int i=n-1;i>=0;i--)
        {
            maxfromend[i]=max(maxfromend[i+1],a[i]);
        }
        int result=0;
        for(int i=0;i<n;i++)
        {
            int low=i+1;
            int high=n-1;
            int ans=i;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(a[i]<=maxfromend[mid])
                {
                    ans=max(ans,mid);
                    low=mid+1;
                }
                else{
                high=mid-1;
                }
            }
            result=max(result,ans-i);
        }
        return result;
    }