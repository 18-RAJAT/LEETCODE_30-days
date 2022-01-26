/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<int>v;
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        inorder(root1);
        inorder(root2);
         
        sort(v.begin(),v.end());
        
        return v;
    }
    
        
    
   private: void inorder(TreeNode* root) {
      
         if(root == NULL)
         {
             return ;
         }
         
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    
        
    }
};

/*
Time Complexity: O(Nlogn)
Space Complexity: O(n+m)
*/