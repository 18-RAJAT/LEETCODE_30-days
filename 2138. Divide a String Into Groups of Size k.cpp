class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        while(s.length() % k)
        {
        s.push_back(fill);
        }
        int n = s.length();
        
        vector<string>answer;
        
        for(int i=0;i<n;i+=k)
        {  
        answer.push_back(s.substr(i,k));
        }
            return answer;
    }
};