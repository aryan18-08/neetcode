class Solution {
public:
    int rob(vector<int>& nums) {
        //bottom up approach
        vector<int> dp1(101,-1);
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        dp1[0]=0;
        dp1[1]=nums[0];
        for(int i=2;i<n;i++){
            int take=nums[i-1]+dp1[i-2];
            int skip=dp1[i-1];
            dp1[i]=max(take,skip);
        }
        int r1=dp1[n-1];
        vector<int> dp2(101,-1);
        dp2[0]=0;
        dp2[1]=0;
        for(int i=2;i<=n;i++){
            int take=nums[i-1]+dp2[i-2];
            int skip=dp2[i-1];
            dp2[i]=max(take,skip);
        }
        int r2=dp2[n];
        return max(r1,r2);
    }
};
