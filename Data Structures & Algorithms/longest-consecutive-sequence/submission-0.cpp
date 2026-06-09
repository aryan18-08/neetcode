class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size();
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int len=1;
        int maxlen=0;
        for(int i=0;i<n;i++){
            int x=nums[i];
            while(st.find(x+1)!=st.end()){
                len++;
                x++;
            }
            maxlen=max(len,maxlen);
            len=1;
        }
        return maxlen;
    }
};
