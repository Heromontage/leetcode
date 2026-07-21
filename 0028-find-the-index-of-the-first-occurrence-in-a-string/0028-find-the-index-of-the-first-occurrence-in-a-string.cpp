class Solution {
public:
    int strStr(string haystack, string needle) {
        int winsize = needle.length();
        int n = haystack.length();
        if (winsize == 0) return 0;
        if (n < winsize) return -1;
        int st = 0;
        while(st<=n-winsize){
            int end = 0;
            while(end<winsize && haystack[st+end]==needle[end]){
                end++;
            }
            if(end == winsize){
                return st;
            }
            st++;
        }
        return -1;
    }
};