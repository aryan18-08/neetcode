class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        if(bills[0]!=5) return false;
        int five=1;
        int ten=0;
        for(int i=1;i<n;i++){
            if(bills[i]==10){
                if(five<1) return false;
                five--;
                ten++;
            }
            else if(bills[i]==20){
                if(five>0&&ten>0){
                    five--;
                    ten--;
                }
                else if(ten<1&&five>=3){
                    five-=3;
                }
                else return false;
            }
            else{
                five++;
            }
        }
        return true;
    }
};