//leetcode
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums2.size() < nums1.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int m = nums1.size(), n = nums2.size();
        int nums1Left, nums1Right, nums2Left, nums2Right;
        int low = -1, high = nums1.size()-1;
        while (low <= high) {
            int nums1LeftIndex = low + (high - low) / 2;
            int nums2LeftIndex = (m + n)/2 - nums1LeftIndex - 2;
            nums1Left = (nums1LeftIndex == -1) ? INT_MIN : nums1[nums1LeftIndex];
            nums1Right = (nums1LeftIndex+1 == nums1.size()) ? INT_MAX : nums1[nums1LeftIndex + 1];
            nums2Left = (nums2LeftIndex == -1) ? INT_MIN : nums2[nums2LeftIndex];  
            nums2Right = (nums2LeftIndex+1 == nums2.size()) ? INT_MAX : nums2[nums2LeftIndex + 1];
            if (nums1Left <= nums2Right && nums2Left <= nums1Right) {
                if ((m + n) % 2 == 0) {
                    return (max(nums1Left, nums2Left) + min(nums1Right, nums2Right))/2.0;
                }
                else {
                    return min(nums1Right, nums2Right);
                }
            }
            else if (nums1Left > nums2Right) {
                high = nums1LeftIndex - 1;
            }
            else {
                low = nums1LeftIndex + 1;
            }
        }
        return 0.0;
    }
};
