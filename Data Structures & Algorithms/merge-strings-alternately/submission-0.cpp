class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int start=0;
        string ans;
        if(n==m){
            while(start!=m){
                ans+=word1[start];
                ans+=word2[start];
                start++;
            }
        }
        else if(n>m){
            while(start!=m){
                ans+=word1[start];
                ans+=word2[start];
                start++;
            }
            for(int i=m;i<n;i++){
                ans+=word1[i];
            }
        }
        else if(m>n){
            while(start!=n){
                ans+=word1[start];
                ans+=word2[start];
                start++;
            }
            for(int i=n;i<m;i++){
                ans+=word2[i];
            }
        }
        return ans;
    }
};