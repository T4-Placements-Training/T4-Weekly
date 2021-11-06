#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void convertToWave(vector<int>& arr, int n){
    
        int flag=1;
        int i=0;
        while(i+1<n)
        {
            if(flag)
            {
                if(arr[i]<=arr[i+1])
                swap(arr[i],arr[i+1]);
            }
            else
            {
                if(arr[i]>=arr[i+1])
                swap(arr[i],arr[i+1]);
            }
            flag=!flag;
            i++;
        }
        
    }