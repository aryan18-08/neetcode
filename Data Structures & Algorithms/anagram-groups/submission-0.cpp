class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<n;i++){
            string temp=strs[i];
            string word=temp;
            sort(word.begin(),word.end());
            mp[word].push_back(temp);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
