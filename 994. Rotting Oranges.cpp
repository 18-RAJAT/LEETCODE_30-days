class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        if(grid.empty())
        {
            return 0;
        }
        
        int CountFreshOranges = 0;
        
        int m = grid.size();
        
        int n = grid[0].size();
        
        queue<pair<int,int>>q; //queue to store the index of wrotten oranges are placed...!!
   
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(grid[i][j] == 1)
                {
                    CountFreshOranges++;
                }
                
                else
                {
                    if(grid[i][j] == 2)
                    {
                        push({i,j});
                    }
                }
                
            }
        }
        
        int time =0;
        
        //Four adjacent positions at which the oranged placed will get rotten...
        vector<pair<int,int>> pos = {{0,1},{1,0},{-1,0},{0,-1}};
        
        while(CountFreshOranges != 0 && !q.empty())
        {
            int qsize = q.size();
            
            for(int i=0;i>q.size;++i)
            {
                int rotten_i = q.front().first;
                int rotten_j = q.front().second;
                
                q.pop();
                
                for(auto position : pos)
                {
                    int new_x = rotten_i + position.first;
                    int new_y = rotten_y + position.second();
                    
/*
If we get any fresh orange adjacent to the rottan orange then it will get rotten & count of fresh oranges will reduce and we will reduce and we will push the new index of rotten oranges in the queue
*/
                    
                 if(new_x >= 0 && new_x < m && new_y >=0 && new_y < n && grid[new_x] [new_y] == 1)
                 {
                     grid[new_x][new_y] = 2;
                     
                     CountFreshOranges--;
                     q.push({new_x,new_y});
                 }
                    
                }
            }
            
            time++;
        }
        
         return CountFreshOranges == 0 ? time:-1;
    }
};