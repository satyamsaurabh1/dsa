class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long long  i = 0 ; i <=num;i++){
            long long ans = i * i;
            if(ans == num){
                return true;
            }
        }
        return false;
    }
};