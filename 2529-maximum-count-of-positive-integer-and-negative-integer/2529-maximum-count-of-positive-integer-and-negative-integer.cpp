class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count = 0;
        int negative_count = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]>0){
                count++;
            }
            else if(nums[i]<0){
                negative_count++;
            }
        }
        return max(count, negative_count);
    }
};