class Solution {
public:
    //bottom up
    int rob(vector<int>& nums) {
        vector<int> dp(101,-1);
        int n=nums.size();
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=2;i<=n;i++){
            int steal=nums[i-1]+dp[i-2];
            int skip=dp[i-1];
            dp[i]=max(steal,skip);
        }
        return dp[n];
    }
};
