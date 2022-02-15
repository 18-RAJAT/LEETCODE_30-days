class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

     for(int&num : nums)   //passing the address
     {
         num *=num;
     }
        
        sort(nums.begin(),nums.end());
        
        return nums;
        
    }
    
};
        
        
