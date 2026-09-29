class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        if(s.length()==1){
            return 1;
        }
        int len = 0;
        int i = n-1;
        while(i>=0 && s[i]==' '){
            i--;
        }

        while(i>=0 && s[i]!=' '){
            len++;
            i--;
        }
        return len;
    }
};