class Solution {
public:
    int climbStairs(int n) {
        int f = 0, sec = 1;

        for(int i = 0; i < n; i++){
            int ans = f + sec;
            f = sec;
            sec = ans;
        }

        return sec;
    }
};