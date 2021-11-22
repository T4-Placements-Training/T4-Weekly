#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void rotateMatrix(vector<vector<int>>& arr, int n) 
{   
	    for(int x=0;x<n/2;x++)
	    {
	        for(int y=x;y<n-x-1;y++)
	        {
	            int temp=arr[x][y];
	            arr[x][y]=arr[y][n-1-x];
	            arr[y][n-1-x]=arr[n-1-x][n-1-y];
	            arr[n-1-x][n-1-y]=arr[n-1-y][x];
	            arr[n-1-y][x]=temp;
	        }
	    }
	}