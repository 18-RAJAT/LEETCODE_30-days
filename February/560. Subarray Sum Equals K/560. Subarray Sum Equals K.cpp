class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = nums.size();
        if(n == 0)
        {
            return 0;
        }
        
        unordered_map<int,int>ump;
        
        int curr_sum = 0;
        int i = 0;
        int count = 0;
        
        while(i<n)
        {
            curr_sum += nums[i];
            if(curr_sum == k)
            count += 1;
            
            if(ump.find(curr_sum-k) != ump.end())
            count += ump[curr_sum - k];
            
            ump[curr_sum]+1;
            
            i += 1;
        }
        
        return count;
        
    }
};