class Solution {
    
    
    //cycle detection code...!!
    
    bool isCycle(vector<vector<int>>& adj,vector<int>&visited,int curr)
    {
        if(visited[curr]==2)
            return true;
        
        visited[curr]=2;
        
        for(int i=0;i<adj[curr].size();++i)
            
            //already processed and skip this part
            
            if(visited[adj[curr][i]] !=1)
            
            if(isCycle(adj,visited,adj[curr][i]))
                
                return true;
        
        visited[curr] =1;
        
        return false;
        
    }
public:
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> adj(numCourses);
         
        //Make adj matrix (directed graph)
                      
        for(int i=0;i<prerequisites.size();++i)
        
        adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            
        vector<int> visited(numCourses,0);
        
        for(int i=0;i<numCourses;++i)
            
          if(visited[i]==0)
                
         if( isCycle (adj,visited,i))
                    
        return false;
        
        return true;
}
};