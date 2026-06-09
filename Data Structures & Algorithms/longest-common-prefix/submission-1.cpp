class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string res;
        string a=strs[0];
        for(int i=1;i<n;i++){
                string b=strs[i];
                string temp;
                int y=a.length();
                int k=b.length();
                int miny=min(y,k);
                int x=0;
                while(x<miny){
                    if(a[x]==b[x]){
                        temp+=a[x];
                        x++;
                    }
                    else break;
                }
                a=temp;
        }
        return a;
    }
};