class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int start=0;
        int end=n-1;
        string temp,t1,t2;
        bool f1=true,f2=true;
        while(start<end){
            if(s[start]!=s[end]){
                temp=s;
                s.erase(end,1);
                t1=s;
                temp.erase(start,1);
                t2=temp;
                break;
            }
            start++;
            end--;
        }     
        start=0; 
        end=t1.size()-1;
        while(start<end){
            if(t1[start]!=t1[end]){
                f1=false;
            }
            start++;
            end--;
        }
        start=0;
        end=t2.size()-1;
        while(start<end){
            if(t2[start]!=t2[end]){
                f2=false;
            }
            start++;
            end--;
        }
        if(f1||f2) return true;
        return false;
    }
};