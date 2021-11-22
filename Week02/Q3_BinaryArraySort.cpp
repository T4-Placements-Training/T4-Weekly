#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        
        * ************/
        int l=0;
        int h=N-1;
        while(l<h)
        {
            while(l<h && A[l]==0)
            l++;
            while(l<h && A[h]==1)
            h--;
            if(l<h)
            swap(A[l],A[h]);
        }
    }