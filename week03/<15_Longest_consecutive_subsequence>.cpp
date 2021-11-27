//leetcode
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashset, tempset;
        for (int i = 0; i < nums.size(); i++) {
            hashset.insert(nums[i]); 
        } 
        int count = 1, maxi = 0, temp = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (hashset.find(nums[i]-1) == hashset.end() && tempset.find(nums[i]) == tempset.end()) {
                tempset.insert(nums[i]);
                temp = nums[i];
                count = 1;
                while (hashset.find(temp + 1) != hashset.end()) {
                    count++;
                    temp++;  
                }
                maxi = max(count, maxi);
            }
        }
        return maxi;
    }
};
