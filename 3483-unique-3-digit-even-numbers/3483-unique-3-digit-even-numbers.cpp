class Solution {
public:
    set<vector<int>> st;

    void help(const vector<int>& digits, vector<bool>& used, vector<int>& combin, vector<vector<int>>& ans) {
        if (combin.size() == 3) {
            if (combin[0] != 0 && combin[2] % 2 == 0 && st.find(combin)==st.end()){
                ans.push_back(combin);
                st.insert(combin);
            }
            return;
        }

        for (int i = 0; i < digits.size(); ++i) {
            if (used[i]) continue;
            used[i] = true;
            combin.push_back(digits[i]);
            help(digits, used, combin, ans);
            combin.pop_back();
            used[i] = false;
        }
    }
    int totalNumbers(vector<int>& digits) {
        vector<int>combin;
        vector<vector<int>>ans;
        vector<bool>use(digits.size(),false);
        help(digits,use,combin,ans);
        return ans.size();
    }
};