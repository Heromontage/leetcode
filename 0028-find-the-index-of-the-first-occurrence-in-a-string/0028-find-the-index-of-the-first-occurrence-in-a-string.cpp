class Solution {
public:
    int strStr(string haystack, string needle) {
        int winsize = needle.length();
        int n = haystack.length();
        if (winsize == 0) return 0;
        if (n < winsize) return -1;
        int st = 0;
        int ans = -1;
        while(st<n){
            string t = haystack.substr(st,winsize);
            if(t==needle){
                ans = st;
                break;
            }
            st++;
        }
        return ans;
    }
};