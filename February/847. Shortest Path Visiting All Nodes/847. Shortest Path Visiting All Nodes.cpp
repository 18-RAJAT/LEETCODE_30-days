class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        
        int n=graph.size(),j,ans=0;
        
        queue<vector<int>>q;
        set<pair<int,int>>s;
        
        
        //Starting bfs from every node & mask is used to cheak state of all visited node
        
        for(int i=0;i<n;++i)
        {
            vector<int>v(5,0);
            int mask = (1<<i);
            int node = i;
            int cost = 0;
            
            v[0] = cost;
            v[1] = node;
            v[2] = mask;
            
            q.push(v);
            s.insert({node,mask});
        }
        
        //BFS call
        
        while(q.size()>0)
        {
            auto z = q.front();
            q.pop();
            
            //All bits are set , means all nodes are finally visited
            
            if(z[2] == (1<<n)-1)
            {
                ans = z[0];
                break;
            }
            
            for(auto j : graph[z[1]])
            {
                int mask = z[2] | (1<<j);
                //Checking that this state is not visited yet in this perticular time 
                
                if(s.find({j,mask}) == s.end())
                {
                    s.insert({j,mask});
                    vector<int>v(5,0);
                    v[0] = z[0]+1;
                    v[1] = j;
                    v[2] = mask;
                    q.push(v);
                }
            }
        }
        
        return ans;
        
    }
};



// TC : O(n * n * 2^n)🎶🙌🎶
// SC: O(n)