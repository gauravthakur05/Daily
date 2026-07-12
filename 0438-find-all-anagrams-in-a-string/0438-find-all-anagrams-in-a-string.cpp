class Solution {
public:
    std::vector<int> findAnagrams(std::string s, std::string p) {
        int n = s.size(), m = p.size();
        if (m > n) return {};

        std::vector<int> pCount(26, 0), sCount(26, 0), ans;

        for (int i = 0; i < m; ++i) {
            pCount[p[i] - 'a']++;
            sCount[s[i] - 'a']++;
        }

        if (pCount == sCount) ans.push_back(0);

        for (int i = m; i < n; ++i) {
            sCount[s[i] - 'a']++;           
            sCount[s[i - m] - 'a']--;      
            
            if (pCount == sCount) {
                ans.push_back(i - m + 1);
            }
        }
        return ans;
    }
};