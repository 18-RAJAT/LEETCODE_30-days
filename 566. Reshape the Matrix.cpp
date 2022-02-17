class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        int Out = n*m;
        
        if(r*c!= Out)
        {
            return mat;
        }
        
        vector<vector<int>> result(r, vector<int>(c, 100));
        for (int i = 0; i < Out; i++) 
            
        result[i / c][i % c] = mat[i / n][i % n];
        
        return result;
    }
};