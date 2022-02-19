class Solution {
public:
    
        //USING PRIORITY QUEUE
    
    int minimumDeviation(vector<int>& nums) {
        
        int result = INT_MAX,minimum = INT_MAX;
        
        priority_queue<int>pq;
        
        for(auto n:nums)
        {
            n = n % 2 ? n * 2 : n;
            
            pq.push(n);
            
            minimum = min(n,minimum);
        }
        
        while(pq.top() % 2 == 0)
        {
            result = min(result,pq.top() - minimum);
            
            minimum = min(minimum,pq.top()/2);
            
            pq.push(pq.top()/2);
            pq.pop();
        }
        
        return min(result,pq.top() - minimum);
    }
};