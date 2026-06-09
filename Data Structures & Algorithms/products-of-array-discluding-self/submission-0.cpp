class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return {1};
        vector<int> prefixarr(n);
        int prefix=1;
        int suffix=1;
        vector<int> suffixarr(n);
        for(int i=0;i<n;i++){
            prefix*=nums[i];
            prefixarr[i]=prefix;
        }
        for(int i=n-1;i>=0;i--){
            suffix*=nums[i];
            suffixarr[i]=suffix;
        }
        vector<int> ans(n);
        ans[0]=suffixarr[1];
        for(int i=1;i<n-1;i++){
            ans[i]=prefixarr[i-1]*suffixarr[i+1];
        }
        ans[n-1]=prefixarr[n-2];
        return ans;
    }
};
