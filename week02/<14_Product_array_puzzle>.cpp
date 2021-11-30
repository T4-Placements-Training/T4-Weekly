class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       //code here    
       vector<long long int> res(n, 1);
       res[0] = nums[0]; 
       for (int i=1;i<res.size();i++) {
           res[i] = res[i-1]*nums[i];
       }
       long long int product = 1;
       for (int i=n-1;i>=0;i--) {
           if (i == 0) {
               res[i] = product;
           }
           else {
               res[i] = product*res[i-1];
               product = product*nums[i];
           }
       }
       return res;
    }
};
