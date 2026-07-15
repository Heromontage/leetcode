class Solution {
public:
    bool iscycle(int src,vector<bool>& vis,vector<bool>&recPath,vector<vector<int>>& edges){
        vis[src] = true;
        recPath[src] = true;

        for(int i = 0;i<edges.size();i++){
            int v = edges[i][0];
            int u = edges[i][1];

            if(u==src){
                if(!vis[v]){
                    if(iscycle(v,vis,recPath,edges)){
                        return true;
                    }
                }
                else if(recPath[v]){
                    return true;
                }
            }
        }

        recPath[src] = false;
        return false;
    }

    void toposort(int curr,vector<bool>& vis,stack<int>& s,vector<vector<int>>& edges){
        vis[curr] = true;
        for(int i = 0;i<edges.size();i++){
            int v = edges[i][0];
            int u = edges[i][1];
            if(u==curr){
                if(!vis[v]){
                    toposort(v,vis,s,edges);
                }
            }
        }
        s.push(curr);
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool>vis(numCourses,false);
        vector<bool>recPath(numCourses,false);
        stack<int>s;
        vector<int>ans;

        for(int i = 0;i<numCourses;i++){
            if(!vis[i]){
                if(iscycle(i,vis,recPath,prerequisites)){
                    return ans;
                }
            }
        }

        vis.assign(numCourses,false);

        for(int i = 0;i<numCourses;i++){
            if(!vis[i]){
                toposort(i,vis,s,prerequisites);
            }
        }

        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }
};