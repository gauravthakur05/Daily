class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int x : nums)
            ans ^= x;

        unsigned int rsb = (unsigned int)ans & (-(unsigned int)ans);

        int a = 0, b = 0;

        for (int x : nums) {
            if ((unsigned int)x & rsb)
                a ^= x;
            else
                b ^= x;
        }

        return {a, b};
    }
};