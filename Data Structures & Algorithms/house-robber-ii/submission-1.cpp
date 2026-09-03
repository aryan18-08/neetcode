#include<bits/stdc++.h>
class Solution {
public:
    int t[101];
    int solve(vector<int>& nums,int i,int n){
        if(i>=n){
            return 0;
        }
        if(t[i]!=-1){
            return t[i];
        }
        int take=nums[i]+solve(nums,i+2,n);
        int skip=solve(nums,i+1,n);
        return t[i]=max(take,skip);
    }
    int rob(vector<int>& nums) {
        //pehla ghar lia toh aakhri nhi le paayenge
        //pehla ghar nhi lia toh aakhri le paayenge
        //isliye 2 case bnenge 1st taken and 1st not taken
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        memset(t,-1,sizeof(t));
        //case1
        int take_first=solve(nums,0,n-1);
        //case2
        memset(t,-1,sizeof(t));
        int dont_take_first=solve(nums,1,n);
        return max(take_first,dont_take_first);
    }
};
