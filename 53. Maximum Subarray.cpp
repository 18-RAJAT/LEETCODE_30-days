class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
         int max_sum=nums[0];
        
         int sum=nums[0];
        
        for(int i=1; i<nums.size(); i++) 
        {
            sum = max(nums[i], sum+nums[i]);
        
            if(sum>max_sum)
            {
                max_sum=sum;
            }
        }
        
        return max_sum;
        
    }
};