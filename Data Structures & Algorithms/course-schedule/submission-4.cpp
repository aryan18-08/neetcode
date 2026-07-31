class Solution {
public:
    bool dfscycle(unordered_map<int,vector<int>>& adj,vector<bool>& visited,vector<bool>&       inrecursion,int node){
        visited[node]=true;
        inrecursion[node]=true;
        for(int& v:adj[node]){
            if(!visited[v]&&dfscycle(adj,visited,inrecursion,v)){
                return true;
            }
            else if(inrecursion[v]==true){
                return true;
            }
        }
        inrecursion[node]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>> adj;
        vector<bool> visited(numCourses,false);
        vector<bool> inrecursion(numCourses,false);
        for(vector<int> it:prerequisites){
            int a=it[0];
            int b=it[1];
            adj[b].push_back(a);
        }
        for(int i=0;i<numCourses;i++){
            if(!visited[i]&&dfscycle(adj,visited,inrecursion,i)){
                return false;
            }
        }
        return true;
    }
};
