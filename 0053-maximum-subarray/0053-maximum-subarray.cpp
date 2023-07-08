class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> array;
        array.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(array[i-1]+nums[i]>nums[i]){
                array.push_back(array[i-1]+nums[i]);
            }
            else{
                array.push_back(nums[i]);
            }
        }
        int max=nums[0];
        for(int i=0;i<array.size();i++){
            if(max<array[i]){
                max=array[i];
            }
        }
        return max;
    }
};