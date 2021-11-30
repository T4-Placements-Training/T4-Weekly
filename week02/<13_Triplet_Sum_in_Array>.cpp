class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X) {
        if (n < 3) {
            return false;
        }
        sort(arr, arr+n);
        for (int i=0;i<n-2;i++) {
            int j = i+1, k = n-1;
            while (j < k) {
                if (arr[i] + arr[j] + arr[k] == X) {
                    return true;
                }
                else if (arr[i] + arr[j] + arr[k] < X) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return false;
    }
};
