class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,temp;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                temp=nums[i+1];
                nums[i+1]=nums[j];
                nums[j]=temp;
                i++;
        }
        
        }
        return i+1;
    }
};