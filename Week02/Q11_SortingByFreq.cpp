#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <unordered_map>
#include <utility>

using namespace std;

struct check
{
    int freq;
    int val;
};
 static bool compare(pair<int,check*>&p1,pair<int,check*>&p2)
{
    if(p1.second->freq==p2.second->freq)
    {
        return(p1.second->val<p2.second->val);
    }
    return (p1.second->freq>p2.second->freq);
}
void printsorted(int arr[],int n)
{
    unordered_map<int,check*>mp;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]])
        {
            mp[arr[i]]->freq++;
        }
        else
        {
            check *a=new check;
            a->val=arr[i];
            a->freq=1;
            mp[arr[i]]=a;
        }
    }
    int s=mp.size();
    pair<int,check*>p[s];
    int i=0;
    for(auto &it:mp)
    {
        p[i++]=make_pair(it.first,it.second);

    }
    sort(p,p+s,compare);
    for(int i=0;i<s;i++)
    {
        int freq=p[i].second->freq;
        while(freq--)
        cout<<p[i].first<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter number of digits : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    printsorted(arr,n);
    return 0;
}