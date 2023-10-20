class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int res=0,i=0;
        for(int j=1;j<prices.size();j++){
            if(prices[i]>prices[j]){
                i=j;
            }
            else{
                res=max(res,prices[j]-prices[i]);
            }
        }
        return res;
        
        
    }
};