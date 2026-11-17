class Solution {
public:
    string helper(string s,int k){
        int n = s.length();
        if(n<=k) return s;
        int l = 0;
        string ans = "";
        while(l<n){
            int sum = 0;
            string m = s.substr(l,k);
            for(char c:m){
                sum+= (c-'0');
            }
            ans += to_string(sum);
            l+=k;
        }
        return ans;
    }
    string digitSum(string s, int k) {
        int n = s.length();
        string ans = helper(s,k);
        while(ans.length()>k){
            ans = helper(ans,k);
        }
        return ans;
    }
};