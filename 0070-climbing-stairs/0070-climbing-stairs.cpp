class Solution {
public:
    
    // const long long MOD = 1000000007;

long long help(int n, vector<long long>& dp) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (dp[n] != -1) return dp[n];

    long long fs = help(n - 1, dp) ;
    long long ss = help(n - 2, dp) ;

    return dp[n] = (fs + ss) ;
}
    
    int climbStairs(int n) {
         vector<long long> dp(n + 1, -1);
        return help(n, dp) ;
    }
};