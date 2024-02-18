class Solution {
public:
    
    int atMost(vector<int> &nums,int goal){
        
        long long head=0,tail=0,sum=0,ans=0;
        
        for(head=0;head<nums.size();head++){
            sum+=nums[head];
            
            while(tail<=head && sum>goal){
                sum-=nums[tail];
                tail++;
            }
            
            ans+=(head-tail+1);
        }
        
        return ans;
    }
    
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         return atMost(nums,goal)-atMost(nums,goal-1);
    }
};

