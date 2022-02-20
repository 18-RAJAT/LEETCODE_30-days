class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        int X1 = intervals[0][0];
        int X2 = intervals[0][1];
        
        
        int result = 1;
        
        for(int i=1;i<intervals.size();++i)
        {
            if(intervals[i][0] > X1 and intervals[i][1] > X2)
            {
                result++;
            }
            
            if(intervals[i][1] > X2)
            {
                X1 = intervals[i][0];
                X2 = intervals[i][1];
            }
            
        }
        
        return result;
        
    }
};




