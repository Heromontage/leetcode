class Solution {
public:
    int strStr(string haystack, string needle) {
        int winsize = needle.length();
        int st = 0;
        int ans = -1;
        while(st<haystack.size()){
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