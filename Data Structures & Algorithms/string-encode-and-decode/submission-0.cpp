class Solution {
public:

    string encode(vector<string>& strs) {
        vector<int> size;
        int n=strs.size();
        for(int i=0;i<n;i++){
            size.push_back(strs[i].length());
        }
        string res="";
        for(int sz:size){
            res.append(to_string(sz));
            res.append(",");
        }
        res.append("#");
        for(int i=0;i<n;i++){
            res.append(strs[i]);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<int> sizes;
        int i=0;
        while(s[i]!='#'){
            int j=i;
            while(s[j]!=','){
                j++;
            }
            sizes.push_back(stoi(s.substr(i,j-i)));
            i=j+1;
        }
        i++;
        vector<string> res;
        for(int sz:sizes){
            res.push_back(s.substr(i,sz));
            i+=sz;
        }
        return res;
    }
};
