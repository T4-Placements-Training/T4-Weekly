#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int findmaxSum(vector<int>a,int s)
{
    int incl=a[0];
    int excl=0;
    int excl_new;
    for(int i=1;i<s;i++)
    {
        excl_new=(incl>excl)?incl:excl;
        incl=excl + a[i];
        excl=excl_new;

    }
    return ((incl>excl)?incl:excl);

}
int main()
{
    vector<int>a = {5,5,10,40,50,35};
    cout<<findmaxSum(a, a.size());
}