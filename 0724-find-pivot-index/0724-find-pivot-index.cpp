class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int num:nums){
            sum+=num;
        }
        int l = 0;
        for(int i = 0;i<n;i++){
            int r = sum-l-nums[i];
            if(l==r){
                return i;
            }
            l+=nums[i];
        }
        return -1;
    }
};