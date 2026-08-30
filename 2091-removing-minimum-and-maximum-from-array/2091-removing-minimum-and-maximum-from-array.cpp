class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int ans = 0;
        if(nums.size()==1){
            return 1;
        }

        int mi = 0;
        int ma = 0;

        for(int i = 0;i<nums.size();i++){
            if(nums[i]>nums[ma]){
                ma = i;
            }
            if(nums[i]<nums[mi]){
                mi = i;
            }
        }
        int front = max(mi,ma)+1;
        int back = nums.size()-min(mi,ma);
        int l = min(mi,ma);
        int r = max(mi,ma);
        int both = l+1+nums.size()-r;

        return min(both,min(front,back));
    }
};