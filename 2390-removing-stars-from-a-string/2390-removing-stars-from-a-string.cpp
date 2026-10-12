class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        int j = 0;
        for(int r = 0;r<n;r++){
            if(s[r]=='*'){
                j--;
            }
            else{
                s[j++] = s[r];
            }
        }
        return s.substr(0,j);
    }
};