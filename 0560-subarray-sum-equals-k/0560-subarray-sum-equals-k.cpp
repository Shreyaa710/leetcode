class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> ab;
        int cur = 0;
        int cnt = 0;
        ab[0]=1;
        for(int i = 0;i < nums.size();i++){
            cur+=nums[i];
            if(ab.find(cur-k)!=ab.end()){
                cnt+=ab[cur-k];
            }
            ab[cur]+=1;
        }
        return cnt;
    }
};