class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }

        return gcd(b, a % b);
    }
    long long gcdSum(vector<int>& nums) {
        long long mx = nums[0];
        int n = nums.size();
        vector<int> prefixgcd(n);
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                mx = max(nums[i], (int)mx);
            }
            prefixgcd[i] = gcd(mx, nums[i]);
        }

        sort(prefixgcd.begin(),prefixgcd.end());

        int start = 0,end = prefixgcd.size()-1;
        long long sum = 0;
        while(start<end){
            sum+=gcd(prefixgcd[start],prefixgcd[end]);
            start++;
            end--;
        }

        return sum;
    }
};