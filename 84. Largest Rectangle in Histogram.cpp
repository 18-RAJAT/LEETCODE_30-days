
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        stack<int> stk; // monotonic stack
        
        heights.push_back(0); // for checking last index value
        
        int maxarea=0;
        
        //traversing heights
        for(int i=0;i<heights.size();i++)
        {
            //now keep checking if any previous value is > current through stack 
            //because it provides me instant access of previous element
            
            while(stk.size() && heights[stk.top()]>= heights[i])
            {
                int h = heights[stk.top()]; // getting the height of previously large bar
                
                stk.pop(); // removing it as I consume it
                
                int side = stk.size()>0? stk.top(): -1;
                
                
                maxarea = max(maxarea, h * (i-side-1)); // max area
            
            }
            
            
            stk.push(i); // pushing index
        }
        
        return maxarea;
    }
};


// TC - O(N)
// SC - O(N)

