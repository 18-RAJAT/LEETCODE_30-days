class Solution {
public:
    
      string removeKdigits(string num, int k) {
      
        string ans = "";                                        
       
       for (char chr : num)
       {
           while (ans.length() and ans.back() > chr and k) {
               ans.pop_back();                                  
               k--;                                             
           }
           
           if (ans.length() or chr != '0')
           
           {
               ans.push_back(chr);
           }
           
       }
       
       while (ans.length() and k--)
       {
           ans.pop_back();
                                   
       }        
          
       return ans.empty() ? "0" : ans;
    }
};