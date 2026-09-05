#include<bits/stdc++.h>
class Solution {
public:
    int n;
    int t[1001][1001];
    int solve(vector<int>& nums,int i,int prev){
        if(i>=n){
            return 0;
        }
        if(prev!=-1&&t[i][prev]!=-1){
            return t[i][prev];
        }
        int take=0;
        if(prev==-1||nums[i]>nums[prev]){
            take=1+solve(nums,i+1,i);
        }
        int skip=solve(nums,i+1,prev);
        if(prev!=-1){
            t[i][prev]=max(skip,take);
        }
        return max(take,skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        n=nums.size();
        memset(t,-1,sizeof(t));
        return solve(nums,0,-1);
    }
};
