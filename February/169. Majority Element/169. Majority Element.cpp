//1st Approach

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
   1st APPROACH  Time Complexity-> O(n)
        int n = nums.size();
        
        unordered_map<int,int>mp;
        
        for(int a:nums)
        {
            mp[a]++;
            
            if(mp[a]>n/2)
            {
                return a;
            }
        }
        
        return -1;
        
    }
};





//2nd Approach


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //Time->(N log N)
        int n = nums.size();
        
       sort(nums.begin(),nums.end());
        
        return nums[n/2];
    }
};