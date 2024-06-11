class Solution {
public:

    int majorityElement(vector<int>& nums) {
      
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
    
        for(auto x:m){
            if(x.second>nums.size()/2)
                return x.first;
        }
        return -1;
        
//         sort(nums.begin(), nums.end());
        
//         int count =1;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             if(nums[i]==nums[i+1]){
//                 count++;
//                 if(count>(nums.size()/2)) return nums[i];
//             }
//             else count =1;
//         }
        
//         return nums[0];
    }
};