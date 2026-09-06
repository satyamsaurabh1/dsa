class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long long ans = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;
            ans = ans * 10 + digit;
        }

        return ans == original;
    }
};
