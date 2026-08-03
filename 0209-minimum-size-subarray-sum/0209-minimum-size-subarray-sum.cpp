class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0 ;
        int mini = INT_MAX;
        int i = 0;
        for(int j = 0 ; j < nums.size() ;j++){
            sum = sum + nums[j];
            while(sum>=target){
                mini = min(mini,j-i+1);
                sum = sum - nums[i];
                i++;
            }
        }
        if(mini == INT_MAX){
            return 0;
        }
        return mini; 
    }
};