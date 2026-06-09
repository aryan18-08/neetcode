class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();){
            s[i]=tolower(s[i]);
            if(!isalnum(s[i])){
                s.erase(i,1);
            }
            else{
                i++;
            }
        }
        int start=0;
        int end=s.size()-1;
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};
