#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > matrix, int R, int C) 
    {
       vector<int>ans;
       int k=0;
       int l=0;
       int n=R;
       int m=C;
       while(k<n && l<m)
       {
           for(int i=l;i<m;i++)
           ans.push_back(matrix[k][i]);
           k++;
           for(int i=k;i<n;i++)
           ans.push_back(matrix[i][m-1]);
           m--;
           if(k<n){
           for(int i=m-1;i>=l;i--)
           ans.push_back(matrix[n-1][i]);
           n--;
           }
           if(l<m)
           {
           for(int i=n-1;i>=k;i--)
           ans.push_back(matrix[i][l]);
           l++;
           }
       }
       return ans;
    }