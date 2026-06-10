class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26]={0};
        int l=0;
        int maxlen=0,maxf=0;
        int n=s.length();
        for(int r=0;r<n;r++){
            freq[s[r]-'A']++;
            maxf=max(maxf,freq[s[r]-'A']);
            int window=r-l+1;
            if(window-maxf>k){
                freq[s[l]-'A']--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
    }
};
