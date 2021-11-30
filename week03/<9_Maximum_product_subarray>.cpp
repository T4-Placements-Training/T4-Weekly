//geeksforgeeks
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long maxP = 1, minP = 1, res = arr[0]; 
	    for (int i = 0; i < n; i++) {
	        if (arr[i] == 0) {
	            maxP = 1;
	            minP = 1;
	        }
	        long long temp = maxP; 
	        maxP = max((long long)arr[i], max(maxP * arr[i], minP * arr[i])); 
	        minP = min((long long)arr[i], min(temp * arr[i], minP * arr[i]));  
	        res = max(res, maxP);
	    }
	    return res;
	}
};
