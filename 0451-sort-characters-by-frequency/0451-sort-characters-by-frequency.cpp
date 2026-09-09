class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(int i = 0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                m[s[i]] = 1;
            }
            else{
                m[s[i]]++;
            }
        }
        priority_queue<pair<int,char>>pq;
        for(auto x:m){
            pq.push({x.second,x.first});
        }
        
        string ans = "";

        while(!pq.empty()){
            auto [freq,ch] = pq.top();
            pq.pop();

            ans+=string(freq,ch);
        }
        return ans;
    }
};