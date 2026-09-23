class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool freq[26];
        for(int i = 0;i<sentence.length();i++){
            freq[sentence[i]-'a'] = true;
        }

        for(bool ch :freq){
            if(!ch){
                return false;
            }
        }

        return true;
    }
};