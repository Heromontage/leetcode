class Solution {
public:
    bool helper(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int l = 0;
        int r = n-1;
        while(l<r){
            if(s[l]!=s[r]){
                return helper(s,l+1,r)||helper(s,l,r-1);
            }
            l++;
            r--;
        }
        return true;
    }
};