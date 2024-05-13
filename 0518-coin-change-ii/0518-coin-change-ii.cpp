class Solution {
public:
    
    int helper(int ind,int target, vector<int>&coins, vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            return target%coins[0]==0;
        }
        
        if(dp[ind][target] != -1) return dp[ind][target];
        
        int notTake=helper(ind-1,target,coins,dp);
        
        int Take=0;
        if(coins[ind]<=target) Take=helper(ind,target-coins[ind],coins,dp);
        
        return dp[ind][target]=Take+notTake;
        
    }
    
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(), vector<int> (amount+1,-1));
        
        return helper(coins.size()-1,amount,coins,dp);
    }
};