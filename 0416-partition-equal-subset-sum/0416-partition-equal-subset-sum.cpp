class Solution {
public:
     bool helper(int ind, int target, vector<int>&arr, vector<vector<int>>&dp)
    {
        if(target==0) return true;
        
        if(ind==0) return arr[ind]==target;
        
        if(dp[ind][target] != -1) return dp[ind][target];
        
        bool notTake=helper(ind-1,target,arr,dp);
        
        bool Take=false;
        
        if(arr[ind]<=target)
        {
            Take=helper(ind-1,target-arr[ind],arr,dp);
        }
        
        return dp[ind][target] = notTake || Take;
    }
    
    bool canPartition(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        
        if(sum %2==1) return false;
        
        vector<vector<int>> dp(arr.size(), vector<int> (sum+1,-1));
        
        return helper(arr.size()-1,sum/2,arr,dp);
    }
};