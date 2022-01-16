class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
        int n = seats.size();
        int current_seat = 0;
        int result =0;
        int left =-1,right =-1;
        
        for(int i=0;i<n;++i)
        {
            if(seats[i] == 1)
            {
                current_seat = 0;
                if(left == -1) left=i;
                right=i;
            }   
                else
                {
                    current_seat++;
                    result = max(result,(current_seat+1)/2);
                }
            }
             result = max({result,left,n-1-right});
        
             return result;
    }
};