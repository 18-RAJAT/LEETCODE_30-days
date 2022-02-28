class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
         int start,end,size=nums.size(); 
        
        vector<string> summaries;
        
        start=0;
        
        while(start<size)
        {
            end=start+1;
        
             while(end<size && nums[end] == nums[end-1]+1)
                end++;
         
            string summary="";
         
            if(end == start+1)
                summary += to_string(nums[start]);
            else
                summary += to_string(nums[start]) + "->" + to_string(nums[end-1]);
            
            summaries.push_back(summary);
            
            start=end;
        }
        
        return summaries;
        
    }
};