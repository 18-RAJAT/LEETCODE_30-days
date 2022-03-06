const int MOD = 10^9+7;

class Solution {
public:
    int countOrders(int n) {
        
        vector<int>dp(n+1,0);
        dp[1] = 1;
        
        for(int i=2;i<=n;++i)
        {
            //Here t contains sum of elements (2*i-1) numbers...!!
            long long int t = (i*2*(i*2-1)/2) % MOD;
            
            long long int y = (dp[i-1]*(t));
            
            dp[i] = y % MOD;   
        }
        
        return dp[n];
        
    }
};