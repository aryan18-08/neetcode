class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        if(bills[0]!=5) return false;
        unordered_map<int,int> mp;
        mp[5]=1;
        for(int i=1;i<n;i++){
            if(bills[i]==10){
                if(mp[5]>=1){
                    mp[5]--;
                    mp[10]++;
                }
                else return false;
            }
            else if(bills[i]==20){
                if(mp[5]>=1&&mp[10]>=1){
                    mp[5]--;
                    mp[10]--;
                    mp[20]++;
                }
                else if(mp[10]==0&&mp[5]>=3){
                    mp[5]-=3;
                    mp[20]++;
                }
                else return false;
            }
            else{
                mp[5]++;
            }
        }
        return true;
    }
};