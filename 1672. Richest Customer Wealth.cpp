class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int maximum =0;
        int sum =0;
        
        for(int i=0;i<accounts.size();++i)
        {
            for(int j=0;j<accounts[i].size();++j)
            {
                sum += accounts[i][j];
            }
            
             if (sum > maximum)
                 
                maximum = sum;
                 sum =0;
        }
        return maximum;
    }
    
    
};