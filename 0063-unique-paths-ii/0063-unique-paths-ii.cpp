int mod=2000000000;

class Solution {
public:
    
    int help(int i,int j,vector<vector<int>>& matrix, vector<vector<int>>&dp){
        if(i==0 && j==0 && matrix[i][j]!=1) return 1;
        if(i<0 || j<0) return 0;
        if(i>=0 && j>=0 && matrix[i][j]==1) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int up=help(i-1,j,matrix,dp);
        int left=help(i,j-1,matrix,dp);
        
        return dp[i][j]=(up+left)%mod;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        return help(m-1,n-1,obstacleGrid,dp);
    }
};