//Using Greedy

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int current =0;
        int total_fuel = 0;
        int total_cost = 0;
        
        int start = 0;
        
        //Total fuel
        
        for(int i=0;i<gas.size();++i)
        {
            total_fuel += gas[i];
        }
        
        //Total cost
        
        for(int i=0;i<gas.size();++i)
        {
            total_cost += cost[i];
        }
        
        if(total_fuel < total_cost)
        {
          return -1; 
        }
        
        for(int i=0;i<gas.size();++i)
        {
            current += (gas[i] - cost[i]);
            
            if(current < 0)
            {
                start = i+1;
                current = 0;
            }
        }
        return start;
    }
};

//Time Complexity = O(n)
//Space Complexity = o(1)