class Solution {
public:
    
    int help(int ind,vector<int>&nums,vector<int>&dp){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        
        if(dp[ind] !=-1) return dp[ind];
        
        int take=nums[ind] + help(ind-2,nums,dp);
        int notTake=0+help(ind-1,nums,dp);
        
        return dp[ind]=max(take,notTake);
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return help(n-1,nums,dp);
    }
};