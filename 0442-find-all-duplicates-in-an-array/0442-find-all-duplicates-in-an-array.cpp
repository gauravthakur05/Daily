class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();


        int count =0;


        sort(nums.begin(), nums.end()); // Put duplicates side-by-side
        vector<int> ans;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
    
};