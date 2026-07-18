class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int maxDist = 0;
        int last = -1;    

        for (int i = 0; i < n; i++) {
            if (seats[i] == 1) {
                if (last == -1) {
                     
                    maxDist = i;
                } else {
                     
                    maxDist = max(maxDist, (i - last) / 2);
                }
                last = i;
            }
        }

        
        maxDist = max(maxDist, n - 1 - last);

        return maxDist;
    }
};
