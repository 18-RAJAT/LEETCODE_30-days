class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
    int n=s1.size(), m=s2.size(), i;
        
        if(n > m) 
        {
          return false;
        }
        
        vector<int> c1(26,0),c2(26,0);
        
        for(i=0; i<n; i++)
        
        {
          
            c1[s1[i]-'a']++;
            
            c2[s2[i]-'a']++;
        }
        for(i; i<m; i++)
        {
            if(c1==c2) 
            {
              return true;
            }
            
            c2[s2[i-n]-'a']--;
            c2[s2[i]-'a']++;
        }
        return c1 == c2 ? true : false;
        
    }
};