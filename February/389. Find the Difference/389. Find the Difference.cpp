
class Solution {
public:
    char findTheDifference(string s, string t) {
        
       int sum_of_s = 0, sum_of_t = 0, difference;
        
        for(int i = 0; s[i]; i++)
        
        {
            sum_of_s += int(s[i]);
        }

        for(int i = 0; t[i]; i++) 
        
        {
            sum_of_t+= int(t[i]);
        }
        
        return (sum_of_t - sum_of_s);
        
        
    }
};