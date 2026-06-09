class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> store;
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(store.count(diff)){
                return {store[diff],i};
            }
            store[nums[i]]=i;
        }
        return {};
    }
};
