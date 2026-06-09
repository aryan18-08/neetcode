class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        else{
            for(int i=0;i<n;i++){
                freq1[s[i]]++;
            }
            for(int j=0;j<m;j++){
                freq2[t[j]]++;
            }
        }
        if(freq1==freq2) return true;
        return false;
    }
};
