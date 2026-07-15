class Solution {
public:
    TreeNode* build(vector<int>& nums, int start, int end) {
        if (start > end)
            return NULL;

        int maxi = start;
        for (int i = start + 1; i <= end; i++) {
            if (nums[i] > nums[maxi])
                maxi = i;
        }

        TreeNode* root = new TreeNode(nums[maxi]);

        root->left = build(nums, start, maxi - 1);
        root->right = build(nums, maxi + 1, end);

        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }
};