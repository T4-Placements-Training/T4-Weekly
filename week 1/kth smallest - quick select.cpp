// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    void swap(int *a,int *b)
    {
        int t=*a;
        *a=*b;
        *b=t;
    }
    int quick_select(int arr[],int l,int r)
    {
        int i=l,k=arr[r];
        for(int j=l;j<=r-1;j++)
        {
            if(arr[j]<=k)
            {
                swap(&arr[i],&arr[j]);
                i++;
            }
            
        }
        swap(&arr[i],&arr[r]);
        return i;
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int pos=quick_select(arr,l,r);
        if(pos-l==k-1)
            return arr[pos];
        if(pos-l > k-1)
            return kthSmallest(arr,l,pos-1,k);
        return kthSmallest(arr,pos+1,r,k-pos+l-1);
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends