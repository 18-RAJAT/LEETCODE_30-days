class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int length_s = s.size();
        int length_p = p.size();
        
        if(length_s < length_p)
    
            return {};
     
        vector<int>p_frequency(26,0); //Count of each letter
        
        vector<int>window(26,0); //Count of each letter
            
            
            //First Window
        for(int i=0;i<length_p;++i)
        {
            p_frequency[p[i] - 'a']++;
            
            window[s[i] - 'a']++;
        }  
            vector<int>answer;
            
            if(p_frequency == window)
        
           answer.push_back(0);
    
        for(int i = length_p;i<length_s;++i)
            {
                window[s[i - length_p] -'a']--;
                
                window[s[i] - 'a']++;
                
                if(p_frequency == window) answer.push_back(i-length_p+1);
                
            }
        
        return answer;
    }
};