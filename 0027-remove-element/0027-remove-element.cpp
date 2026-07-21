class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count = 0;
        int st = 0;
        while(st<n){
            if(nums[st]!=val){
                nums[count] = nums[st];
                count++;
            }
            st++;
        }
        return count;
    }
};