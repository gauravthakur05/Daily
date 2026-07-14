class Solution {
public:
    int helper(int i, int n, vector<int>& cost, vector<int>& dp) {
        if (i >= n) return 0;

        if (dp[i] != -1) return dp[i];

        int onestep = cost[i] + helper(i + 1, n, cost, dp);
        int twostep = cost[i] + helper(i + 2, n, cost, dp);

        return dp[i] = min(onestep, twostep);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);

        return min(helper(0, n, cost, dp), helper(1, n, cost, dp));
    }
};
