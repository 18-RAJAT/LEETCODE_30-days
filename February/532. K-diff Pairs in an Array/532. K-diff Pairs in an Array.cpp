class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        
        if(k < 0)
        {
            return 0;
        }
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();++i)
        {
            mp[nums[i]]++;
        }
        
        int count = 0;
        
        if(k == 0)
        {
            for(auto X:mp)
            {
                if(X.second > 1)
                {
                    count++;
                }
            }
            
            return count;
        }
        
        for(auto X:mp)
        {
            if(mp.count(X.first - k))
                count++;
        }
        
        return count;
        
    }
};