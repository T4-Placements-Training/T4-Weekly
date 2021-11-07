class Solution {
public:
    int calc_left(vector<int>& nums,int x)
    {
        int sum=0;
        for(int i=0;i<x;i++)
            sum+=nums[i];
        return sum;
    }
    int calc_right(vector<int>& nums,int x)
    {
        int sum=0;
        for(int i=x;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        return sum;
    }
    int pivotIndex(vector<int>& nums) {
        int pivot=-1;
        int n=nums.size();
        for(int i=0;i<=n-1;i++)
        {
            if(calc_left(nums,i)==calc_right(nums,i+1))
            {
                pivot=i;
                break;
            }
                    
        }
        return pivot;
    }
};


// solution 2:

class Solution {
public:
   
    int pivotIndex(vector<int>& nums) {
        int pivot=-1;
        int lsum=0,rsum=0;
        for(int i=0;i<nums.size();i++)
            rsum+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            rsum-=nums[i];
            if(lsum==rsum)
            {
                pivot=i;
                break;
            }
            lsum+=nums[i];
            
        }
        return pivot;
    }
};