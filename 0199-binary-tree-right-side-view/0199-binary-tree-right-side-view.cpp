class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
         vector<int> ans;
        if(root==NULL) return ans;
        
         queue<TreeNode*> q;
         q.push(root);
         
         while(!q.empty()){
             int n = q.size();
             
             for(int i = 0; i < n; i++){
                 
                 TreeNode* f =q.front();
                 q.pop();
                 if(i==0)ans.push_back(f->val);
                 if(f->right)q.push(f->right);

                if(f->left) q.push(f->left);
                 
                 
             }
             
         }
        return ans;
    }
};