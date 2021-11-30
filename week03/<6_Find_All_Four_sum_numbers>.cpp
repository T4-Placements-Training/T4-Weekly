//geeksforgeeks
class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> res; 
        if (arr.size() < 4) {
            return res;
        }
        int n = arr.size();
        sort(arr.begin(), arr.end()); 
        vector<int> v;
        for (int i=0;i < n-3;) {
            for (int j=i+1;j<n-2;) {
                int left = j+1, right = arr.size()-1; 
                while (left < right) {
                    if (arr[i] + arr[j] + arr[left] + arr[right] == k) {
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[left]);
                        v.push_back(arr[right]);
                        res.push_back(v);
                        left++;
                        while (left < n && arr[left] == arr[left-1]) {
                            left++;
                        }
                        right--;
                        while (right > j && arr[right] == arr[right+1]) {
                            right--;    
                        }  
                        v.clear();
                    }
                    else if (arr[i] + arr[j] + arr[left] + arr[right] < k) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
                j++; 
                while (j < arr.size() && arr[j] == arr[j-1]) {
                    j++;
                }
            }
            i++; 
            while (i < arr.size() && arr[i] == arr[i-1]) {
                i++;
            }
        }
        return res;
    }
};
