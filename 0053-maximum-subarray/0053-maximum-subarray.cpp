class Solution {
public:
    
//     int maxfind(int a,int b)
//     {
//         if(a>b)
//             return a;
        
//         else
//             return b;
//     }
    
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]>nums[i]){
                sum+=nums[i];
                res=max(res,sum);
            }
            else{
                sum=nums[i];
                res=max(res,sum);
            }
        }
        return res;
        
    }
};