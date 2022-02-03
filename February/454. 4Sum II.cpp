class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) 
        
    {
        
        unordered_map<int,int>ans;

        for(auto a : nums1)
        {
            for(auto b : nums2)
            {
            
            int Idx = a + b;
            ans[ a+b ]++;
                
            }
        
    }
        
        int count = 0;
        
        for(auto c : nums3)
        {
            for(auto d : nums4)
            {
                
                if(ans.find(-c-d) !=ans.end())
                {
                    count += ans[-c-d];
                }
            }
        }
        
        return count;
    }
};