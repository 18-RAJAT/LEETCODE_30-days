

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
        int index = 1 ;

        int last_element = nums[0];
	
        int count = 1 ;
        
        for(int i = 1 ; i < nums.size(); i++)
        {
            
            if(nums[i] == last_element) 
            {
      
                if(count < 2) 
                {
                    nums[index++]= nums[i];
                    count ++;
                }
                 
            }
            else 
            {
                nums[index ++] = nums[i];
                last_element = nums[i];
                count = 1;
            }
             
        }
        
        return index;
    }
};
