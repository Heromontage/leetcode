class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int ans = 0;
        for(int i = 0;i<operations.size();i++){
            if(operations[i]=="C"){
                if(!st.empty()){
                    st.pop();
                }
            }
            else if(operations[i]=="D"){
                if(!st.empty()){
                    st.push(2*st.top());
                }
            }
            else if(operations[i]=="+"){
                if(st.size()>=2){
                int topele = st.top();
                st.pop();
                int secondele = st.top();
                st.push(topele);
                st.push(topele+secondele);}
            }
            else{
                st.push(stoi(operations[i]));
            }
        }

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        return ans;
    }
};