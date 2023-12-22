class Solution {
public:
    int findMin(vector<int>& nums) {
//         int mini=INT_MAX;
        
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<mini)
//                 mini=nums[i];
//         }
//         return mini;
        int mini;
        int res=INT_MAX;
        int i=0,j=nums.size()-1;
        
        if(nums.size()==1){
            return nums[0];
        }
        while(i<=j){
            mini=min(nums[i++],nums[j--]);
            res=min(mini,res);
        }
        return res;
    }
};