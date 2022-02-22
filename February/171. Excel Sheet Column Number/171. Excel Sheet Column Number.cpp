class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int result = 0;
     
        for (char c : columnTitle) 
     {
         int new_data = c - 'A' + 1;
         
         result = result * 26 + new_data;
     }
        
        return result;
        
    }
};