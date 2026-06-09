class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="+"){
                stack<int> temp=st;
                int sum=0;
                for(int i=0;i<2;i++){
                    sum+=temp.top();
                    temp.pop();
                }
                st.push(sum);
            }
            else if(operations[i]=="D"){
                st.push(st.top()*2);
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};