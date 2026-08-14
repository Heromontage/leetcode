class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            int l = i - 1;
            int r = i + 1;
            int x = 0;
            int y = 0;
            while (l >= 0) {
                x += nums[l];
                l--;
            }
            while (r <= n - 1) {
                y += nums[r];
                r++;
            }
            if (x == y) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};