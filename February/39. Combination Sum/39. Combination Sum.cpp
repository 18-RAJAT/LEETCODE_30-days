class Solution {
public:
    
      vector<vector<int>>answer;
      
    void helper(int i,vector<int>& candidate,int target,vector<int>solution)
    {
        if(target == 0)
        {
            answer.push_back(solution);
            
            return;
        }
        
        if(target <= 0)
        {
            return;
        }
        
        if(i == candidate.size())
        {
            return;
        }
        
        //Skip the ith element
        helper(i+1,candidate,target,solution);
        
        //Pick ith element
        solution.push_back(candidate[i]);
        helper(i,candidate,target-candidate[i],solution);
        
        //Backtracking
        solution.pop_back();
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>solution;
        
        helper(0,candidates,target,solution);
        
        return answer;
    }
};