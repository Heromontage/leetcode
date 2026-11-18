class Solution {
public:
    int minChanges(string s) {
        int count = 0;
        for(int l = 0;l<s.length();l+=2){
            int r = l;
            if(s[r]!=s[r+1]){
                count+=1;
            }
        }
        return count;
    }

};