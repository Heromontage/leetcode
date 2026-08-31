class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int ans = 0;
        for(int right = 0;right<n;right++){
            if(nums[right]==0){
                continue;
            }
            if(right > 0 && nums[right-1]==0){
                left = right;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};