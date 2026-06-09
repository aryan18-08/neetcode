class Solution {
public:
// O(1) space solution
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int res=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==res){
                count++;
            }
            else if((nums[i]!=res)&&count>=0){
                count--;
                if(count<0){
                    res=nums[i];
                    count=1;
                }
            }
        }
        return res;
    }
};