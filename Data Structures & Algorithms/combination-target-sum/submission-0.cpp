class Solution {
public:
    void find_sum(int idx,vector<int>& nums,int target,vector<vector<int>>& ans,vector<int>& ds){
        if(idx==nums.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(nums[idx]<=target){
            ds.push_back(nums[idx]);
            find_sum(idx,nums,target-nums[idx],ans,ds);
            ds.pop_back();
        }
        find_sum(idx+1,nums,target,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        find_sum(0,nums,target,ans,ds);
        return ans;
    }
};
