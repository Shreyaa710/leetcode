class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp1;
        vector<int> temp2;
        int k=0,j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                temp1.push_back(nums[i]);
            }
            else{
                temp2.push_back(nums[i]);
            }
        }

        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0){
                nums[i]=temp1[k++];
            }
            else{
                nums[i]=temp2[j++];
            }
        }
        return nums;

    }
};
