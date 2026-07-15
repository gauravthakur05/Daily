class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int mx = INT_MIN;
        int Level = 0;
        int f = 1;
        
        queue<TreeNode*> q;
        q.push(root);
        
        
        while(!q.empty()) {

            int n = q.size();
            
            int sum = 0;
            
            
            for(int i = 0; i < n; i++) {
                
                TreeNode* node = q.front();
                q.pop();
                
                sum += node->val;
                
                if(node->left)
                    q.push(node->left);
                
                if(node->right)
                    q.push(node->right);
            }
            
            if(sum > mx) {
                mx = sum;
                Level = f;
            }
            f++;
        }
        
        return Level;
        
    }
};