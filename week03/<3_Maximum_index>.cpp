class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        vector<int> minLeft(N, 0);
        vector<int> maxRight(N, 0);
        minLeft[0] = A[0];
        maxRight[N-1] = A[N-1];
        for (int i=1;i<N;i++)
        {
            minLeft[i] = min(minLeft[i-1], A[i]);
        }
        for (int i=N-2;i>=0;i--)
        {
            maxRight[i] = max(maxRight[i+1], A[i]);
        }
        int i=0, j=0;
        int res = 0;
        while (j<N)
        {
            if (minLeft[i]<=maxRight[j])
            {
                res = max(res, j-i);
                j++;
            }
            else
            {
                i++;
            }
        }
        return res;
    }
};
