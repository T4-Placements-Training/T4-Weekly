#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

static bool comparator(string &s1,string &s2)
	{
	    return s1+s2>s2+s1;
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    sort(arr.begin(),arr.end(),comparator);
	    string ans;
	    for(string s:arr)
	    {
	        ans+=s;
	    }
	 return ans;   
	}