class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")return 0;
        int n = s.length();
        int ans = 1;
        int l =0;
        set<char>t;
        for(int r=0;r<n;r++){
            while(t.find(s[r])!=t.end()){
                t.erase(s[l]);
                l++;
            }
            t.insert(s[r]);
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};