class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int res=0,buy=INT_MAX;
        for(int j=0;j<prices.size();j++){
            if(prices[j]<buy){
                buy=prices[j];
            }
            else{
                res=max(res,prices[j]-buy);
            }
        }
        return res;
        
        
         
    }
};