class Solution {
public:
    void helper(string s,int left,int right,int& start,int& maxlength){
        while(left>=0 && right < s.length() && s[left]==s[right]){
            int currl = right-left+1;

            if(currl>maxlength){
                maxlength = currl;
                start = left;
            }

            left--;
            right++;
        }
    }
    string longestPalindrome(string s) {
        if(s.empty()){
            return "";
        }

        int st = 0;
        int max = 1;
        for(int i = 0;i<s.length();i++){
            helper(s,i,i,st,max);//odd
        
            helper(s,i,i+1,st,max);//even
        }

        return s.substr(st,max);
    }
};