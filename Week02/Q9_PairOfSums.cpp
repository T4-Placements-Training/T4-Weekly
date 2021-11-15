#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

 bool binarysearch(int B[],int l,int r,int x)
    {
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(B[m]==x)
            return true;
            else if(B[m]<x)
            l=m+1;
            else
            r=m-1;
        }
        return false;
    }
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int x)
    {
        // Your code goes here
        vector<pair<int,int>>p;
        sort(A,A+N);
        sort(B,B+M);
        
        for(int i=0;i<N;i++)
        {
            bool search=binarysearch(B,0,M-1,x-A[i]);
            if(search==true)
            p.push_back({A[i],x-A[i]});
        }
            return p;
    }
    