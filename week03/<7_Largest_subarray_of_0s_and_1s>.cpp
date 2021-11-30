//geeksforgeeks
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        unordered_map<int, int> map; 
        map[0] = -1; 
        int prefixSum = 0, maxi = 0;
        for (int i=0;i<N;i++) {
            prefixSum = prefixSum + (arr[i] == 0 ? -1 : 1); 
            if (map.find(prefixSum) != map.end()) {
                maxi = max(maxi, i-map[prefixSum]);           
            }
            else {
                map[prefixSum] = i;
            }
        }
        return maxi;
    }
};
