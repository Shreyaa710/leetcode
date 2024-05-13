class Solution {
public:
    
    int solve(int ind, int sum, vector<int> &arr, vector<vector<int>> &dp){
	    if(ind == 0) 
	    {
	        if(sum == 0 && arr[ind] == 0) return 2;
	        if(sum == 0 || sum == arr[ind]) return 1;
	        return 0;
	    }
	    if(dp[ind][sum] != -1) return dp[ind][sum];
	    
	    int notPick = solve(ind-1, sum, arr, dp);
	    
	    int pick = 0;
	    if(arr[ind] <= sum) pick = solve(ind-1, sum - arr[ind], arr, dp);
	    
	    return dp[ind][sum] = (pick + notPick) % 1000000007;
	}
    
    int findTargetSumWays(vector<int>& arr, int d) {
        
        int n=arr.size();
        int totalSum = 0;
        for(int i=0; i<n; i++){
            totalSum+=arr[i];
        }
        
        if(totalSum - d < 0 || (totalSum-d) % 2 != 0) return 0;
        
        int target = (totalSum - d)/2;
        
        vector<vector<int>> dp(n, vector<int>(target+1, -1));
        // vector<vector<int>> dp(n, vector<int>(sum+1, -1));
        
        return (solve(n-1,target, arr, dp)) % 1000000007;
    }
};