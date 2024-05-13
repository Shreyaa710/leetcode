class Solution {
public:
    
    int helper(int ind,int target, vector<int>&coins, vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(target%coins[ind]==0) return target/coins[ind];
            return 1e9;
        }
        
        if(dp[ind][target] != -1) return dp[ind][target];
        
        int notPick= 0 + helper(ind-1,target,coins,dp);
        
        int pick=INT_MAX;
        if(coins[ind]<=target) pick=1+helper(ind,target-coins[ind],coins,dp);
        
        return dp[ind][target]= min(pick,notPick);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        vector<vector<int>> dp(coins.size(), vector<int> (amount+1,-1));
        
        int ans= helper(coins.size()-1,amount,coins,dp);
        if(ans>10000000) return -1;
        return ans;
    }
};