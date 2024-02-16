class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0, ans = 0;
        
        while (j < nums.size()) {
            if (nums[j] == 1) {
                j++;
            } else if (nums[j] == 0 && k != 0) {
                k--;
                j++;
            } else if (nums[j] == 0 && k == 0) {
                while (nums[i] != 0) {
                    i++;
                }
                i++;
                j++;
            }
            
            ans = max(ans, j - i);
        }
        
        return ans;
    }
};
