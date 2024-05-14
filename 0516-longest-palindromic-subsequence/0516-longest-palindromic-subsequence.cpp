class Solution {
public:
    
    int helper(int i,int j, string &t, string &s, vector<vector<int>>&dp)
    {
        if(i<0 || j<0) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(t[i]==s[j]) dp[i][j]=1+ helper(i-1,j-1,t,s,dp);
        
        else dp[i][j]=max( helper(i-1,j,t,s,dp),  helper(i,j-1,t,s,dp));
        
        return dp[i][j];
    }
    
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(s.begin(),s.end());
        
        vector<vector<int>> dp(t.length(), vector<int>(s.length(),-1));
        
        return helper(t.length()-1,s.length()-1,t,s,dp);
    }
};