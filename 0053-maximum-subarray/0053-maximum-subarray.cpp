class Solution {
public:
    
    int maxfind(int a,int b)
    {
        if(a>b)
            return a;
        
        else
            return b;
    }
    
    int maxSubArray(vector<int>& nums) {
       int max= nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i]+sum){
                sum= nums[i];
            }
            
            else
                sum+=nums[i];
            
            max= maxfind(max,sum);
        }
        
        return max;
    }
};