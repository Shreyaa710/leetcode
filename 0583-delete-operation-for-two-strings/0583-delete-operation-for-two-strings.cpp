class Solution {
public:
    
     
    int helper(int i1,int i2, string &s1, string &s2, vector<vector<int>>&dp)
    {
        if(i1<0 || i2<0) return 0;
        
        if(dp[i1][i2] != -1) return dp[i1][i2];
        
        if(s1[i1]==s2[i2]) return dp[i1][i2]= 1+ helper(i1-1,i2-1,s1,s2,dp);
        
        return dp[i1][i2]= max(helper(i1-1,i2,s1,s2,dp),helper(i1,i2-1,s1,s2,dp));
        
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int i1=text1.length();
        int i2=text2.length();
        
        vector<vector<int>> dp(i1, vector<int>(i2,-1));
        
        return helper(i1-1,i2-1,text1,text2,dp);
    }
    
    int minDistance(string word1, string word2) {
        return word1.length()+ word2.length() - 2*longestCommonSubsequence(word1,word2);
    }
};