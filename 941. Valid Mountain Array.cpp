class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        
        if(n==1)
        {
            return false;
        }
        
        int increasing = 1;
        
        for(int i=1;i<n;++i)
        {
            if(arr[i] < arr[i-1])
            {
                if(i==1)
                {
                    //Always decreasing
                    return false;
                }
                
                increasing =0;
            }
            
            if(increasing)
            {
                if(arr[i] <= arr[i-1])
                {
                    return false;
                }
            }
            
            else
            {
                if(arr[i] >= arr[i-1])
                {
                    return false;
                }
                
            }
        }
        
        if(increasing) return false;
        
        return true;
    }
};