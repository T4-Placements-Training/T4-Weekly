#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

 void sort012(int a[], int n)
    {
        // code here 
        int low = 0, high = n - 1, mid = 0;

       while (mid <= high)
       {
        if (a[mid] == 0)
            swap(a[mid++],a[low++]);
        else if (a[mid] == 1)
            mid++;
        else
            swap(a[high--],a[mid]);
       }
        
        
    }